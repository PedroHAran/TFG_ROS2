#!/bin/bash

MAPA=$1
if [ -z "$MAPA" ]; then
    echo "Error: Debes pasar el nombre del mapa (maze, depot, warehouse)"
    exit 1
fi

# Navegamos a la carpeta del mapa
cd $HOME/TFG/DataCartographer/$MAPA

echo "=== INICIANDO CARTOGRAPHER - MAPA: $MAPA (3 EJECUCIONES) ==="

for i in {1..3}
do
    echo "--- Iniciando Ejecución $i de 3 ---"

    # La configuración LUA se lee desde el directorio padre
    /opt/ros/jazzy/lib/cartographer_ros/cartographer_node \
        -configuration_directory $HOME/TFG/DataCartographer \
        -configuration_basename cartographer_config.lua \
        --ros-args -p use_sim_time:=true -r scan:=/scan -r odom:=/odom -r tf:=/tf -r tf_static:=/tf_static > log_cartographer_${MAPA}_${i}.txt 2>&1 &
    NODE_PID=$!

    /opt/ros/jazzy/lib/cartographer_ros/cartographer_occupancy_grid_node \
        -resolution 0.05 -publish_period_sec 1.0 \
        --ros-args -p use_sim_time:=true -r map:=/map > log_grid_${MAPA}_${i}.txt 2>&1 &
    GRID_PID=$!

    sleep 2

    if ! ps -p $NODE_PID > /dev/null; then
        echo -e "\nERROR FATAL: Cartographer crasheó en iteración $i. Revisa el log."
        kill $GRID_PID 2>/dev/null
        continue
    fi

    echo "      Grabando métricas..."
    echo "CPU(%),RAM(MB)" > metricas_cartographer_${MAPA}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_cartographer_${MAPA}_${i}.csv
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
    ros2 bag record -o bag_trayectoria_cartographer_${MAPA}_${i} /tf /tf_static /odom /trajectory_node_list /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    echo "      Reproduciendo bag_${MAPA}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAPA --clock

    sleep 2 

    echo "      Bag finalizado. Guardando el mapa..."
    ros2 run nav2_map_server map_saver_cli -f mapa_cartographer_${MAPA}_${i} --ros-args -p use_sim_time:=true

    echo "      Limpiando procesos..."
    kill $NODE_PID $GRID_PID $RVIZ_PID $METRICS_PID $TRAYECTORIA_PID 2>/dev/null
    pkill -f rviz2
    pkill -f cartographer_node
    pkill -f cartographer_occupancy
    
    sleep 5
done