#!/bin/bash

MAPA=$1
if [ -z "$MAPA" ]; then
    echo "Error: Debes pasar el nombre del mapa (maze, depot, warehouse)"
    exit 1
fi

cd $HOME/TFG/DataIrisLama/$MAPA || { echo "Error al acceder a la carpeta"; exit 1; }
echo "=== INICIANDO IRIS LAMA (PF) - MAPA: $MAPA (3 EJECUCIONES) ==="

source $HOME/TFG/lama_ws/install/setup.bash

for i in {1..3}
do
    echo "--- Iniciando Ejecución $i de 3 ---"

    # 1. Arrancar Iris LAMA
    ros2 launch iris_lama_ros2 pf_slam2d_live_launch.py use_sim_time:=true > log_lama_${MAPA}_${i}.txt 2>&1 &
    
    sleep 5
    # Capturamos el binario C++ puro
    NODE_PID=$(pgrep -x "pf_slam2d_ros" | head -n 1)

    # 2. Métricas
    echo "      Grabando métricas..."
    echo "CPU(%),RAM(MB)" > metricas_lama_${MAPA}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_lama_${MAPA}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    # 3. RViz2 
    echo "      Abriendo RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    # 4. Trayectoria
    echo "      Grabando trayectoria..."
    ros2 bag record -o bag_trayectoria_lama_${MAPA}_${i} /tf /tf_static /odom /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    # 5. Reproducir Bag EN SEGUNDO PLANO
    echo "      Reproduciendo bag_${MAPA}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAPA --clock &
    BAG_PID=$!

    # 6. Guardar mapa en bucle
    echo "      Guardando el mapa periódicamente..."
    while kill -0 $BAG_PID 2>/dev/null; do
        ros2 run nav2_map_server map_saver_cli -f mapa_lama_${MAPA}_${i} --ros-args -p use_sim_time:=true -p map_subscribe_transient_local:=false > /dev/null 2>&1
        sleep 3 
    done
    
    echo "      Bag finalizado. Mapa final guardado."
    sleep 2

    # 7. Limpiar
    echo "      Limpiando procesos..."
    kill $NODE_PID $METRICS_PID $TRAYECTORIA_PID $RVIZ_PID 2>/dev/null
    pkill -f rviz2
    pkill -x pf_slam2d_ros
    
    sleep 5
done