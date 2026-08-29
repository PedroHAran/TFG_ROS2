#!/bin/bash

MAPA=$1
if [ -z "$MAPA" ]; then
    echo "Error: Debes pasar el nombre del mapa (maze, depot, warehouse)"
    exit 1
fi

cd $HOME/TFG/DataMrptRbpf/$MAPA || { echo "Error al acceder a la carpeta"; exit 1; }
echo "=== INICIANDO MRPT RBPF SLAM - MAPA: $MAPA (3 EJECUCIONES) ==="

source $HOME/TFG/mrpt_ws/install/setup.bash

for i in {1..3}
do
    echo "--- Iniciando Ejecución $i de 3 ---"

    # 1. Arrancar MRPT RBPF SLAM 
    ros2 run mrpt_rbpf_slam mrpt_rbpf_slam \
        --ros-args -p use_sim_time:=true \
        -p base_frame_id:=base_link \
        -p odom_frame_id:=odom \
        -p sensor_source:=scan \
        -p ini_filename:=$HOME/TFG/mrpt_ws/install/mrpt_rbpf_slam/share/mrpt_rbpf_slam/tutorial/grid_slam_demo.ini > log_mrpt_${MAPA}_${i}.txt 2>&1 &
    
    sleep 5
    # Capturamos el binario C++ puro, ignorando el lanzador de ROS
    NODE_PID=$(pgrep -x "mrpt_rbpf_slam" | head -n 1)

    # 2. Métricas
    echo "      Grabando métricas..."
    echo "CPU(%),RAM(MB)" > metricas_mrpt_${MAPA}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_mrpt_${MAPA}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    # 3. RViz2
    echo "      Abriendo RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    # 4. Trayectoria + Ground Truth
    echo "      Grabando trayectoria..."
    ros2 bag record -o bag_trayectoria_mrpt_${MAPA}_${i} /tf /tf_static /odom /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    # 5. Reproducir Bag
    echo "      Reproduciendo bag_${MAPA}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAPA --clock

    sleep 2 

    # 6. Guardar mapa 
    echo "      Bag finalizado. Guardando el mapa..."
    ros2 run nav2_map_server map_saver_cli -f mapa_mrpt_${MAPA}_${i} --ros-args -p use_sim_time:=true

    # 7. Limpiar
    echo "      Limpiando procesos..."
    kill $NODE_PID $RVIZ_PID $METRICS_PID $TRAYECTORIA_PID 2>/dev/null
    pkill -f rviz2
    pkill -x mrpt_rbpf_slam
    
    sleep 5
done