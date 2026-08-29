#!/bin/bash

MAPA=$1
if [ -z "$MAPA" ]; then
    echo "Error: Debes pasar el nombre del mapa (maze, depot, warehouse)"
    exit 1
fi

# Navegamos a la carpeta del mapa dentro de DataSLAMToolbox
cd $HOME/TFG/DataSLAMToolbox/$MAPA

echo "=== INICIANDO SLAM TOOLBOX - MAPA: $MAPA (3 EJECUCIONES) ==="

for i in {1..3}
do
    echo "--- Iniciando Ejecución $i de 3 ---"
    
    ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true > log_slam_${MAPA}_${i}.txt 2>&1 &
    NODE_LAUNCH_PID=$!

    echo -n "      Esperando a que arranque SLAM Toolbox"
    NODO_LISTO=false
    NODE_PID=""
    for j in {1..45}; do
        NODE_PID=$(pgrep -f "async_slam_toolbox_node" | grep -v "\.sh" | head -n 1)
        if [ -n "$NODE_PID" ]; then
            echo -e "\n      ¡Nodo encontrado! (PID: $NODE_PID)"
            NODO_LISTO=true
            sleep 2
            break
        fi
        echo -n "."
        sleep 1
    done

    if [ "$NODO_LISTO" = false ]; then
        echo -e "\nERROR: SLAM Toolbox no arrancó en la iteración $i. Revisa el log."
        kill $NODE_LAUNCH_PID
        continue
    fi

    echo "      Grabando métricas..."
    echo "CPU(%),RAM(MB)" > metricas_slam_toolbox_${MAPA}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_slam_toolbox_${MAPA}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    echo "      Abriendo RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!
    
    sleep 5
    
    echo "      Grabando trayectoria..."
    # AÑADIDO GROUND TRUTH AQUÍ PARA EVO
    ros2 bag record -o bag_trayectoria_slam_toolbox_${MAPA}_${i} /tf /tf_static /odom /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    echo "      Reproduciendo bag_${MAPA}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAPA --clock
    
    sleep 2 

    echo "      Bag finalizado. Guardando el mapa..."
    ros2 run nav2_map_server map_saver_cli -f mapa_slam_toolbox_${MAPA}_${i} --ros-args -p use_sim_time:=true

    echo "      Limpiando procesos de la iteración $i..."
    kill $NODE_LAUNCH_PID $RVIZ_PID $METRICS_PID $TRAYECTORIA_PID 2>/dev/null
    pkill -f rviz2
    pkill -f async_slam_toolbox
    
    sleep 5 
done