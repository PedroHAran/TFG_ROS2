#!/bin/bash

echo "=== INICIANDO AUTOMATIZACIÓN DE CARTOGRAPHER HECTOR (5 EJECUCIONES) ==="

for i in {1..5}
do
    echo "--- Iniciando Ejecución $i de 5 ---"

    # 1. Arrancar Cartographer Node (Configurado como Hector)
    /opt/ros/jazzy/lib/cartographer_ros/cartographer_node \
        -configuration_directory /home/pharanguren/TFG/DataCartographerHector \
        -configuration_basename cartographer_hector.lua \
        --ros-args -p use_sim_time:=true -r scan:=/scan -r odom:=/odom -r tf:=/tf -r tf_static:=/tf_static > log_cartographer_${i}.txt 2>&1 &
    NODE_PID=$!

    # 2. Arrancar el generador del Occupancy Grid
    /opt/ros/jazzy/lib/cartographer_ros/cartographer_occupancy_grid_node \
        -resolution 0.05 -publish_period_sec 1.0 \
        --ros-args -p use_sim_time:=true -r map:=/map > log_grid_${i}.txt 2>&1 &
    GRID_PID=$!

    sleep 2

    if ! ps -p $NODE_PID > /dev/null; then
        echo -e "\nERROR FATAL: Cartographer crasheó en iteración $i. Revisa log_cartographer_${i}.txt"
        kill $GRID_PID 2>/dev/null
        continue
    fi

    # 3. Iniciar monitorización de CPU/RAM
    echo "      Grabando métricas en metricas_hector_${i}.csv"
    echo "CPU(%),RAM(MB)" > metricas_hector_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_hector_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    # 4. Abrir RViz2
    echo "      Abriendo RViz2..."
    ros2 run rviz2 rviz2 -d ~/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    # 5. Grabar Trayectoria
    echo "      Grabando trayectoria en bag_trayectoria_hector_${i}..."
    ros2 bag record -o bag_trayectoria_hector_${i} /tf /tf_static /odom /trajectory_node_list > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    # 6. Reproducir Bag
    echo "      Reproduciendo bag_warehouse..."
    ros2 bag play ~/TFG/Bags/bag_warehouse --clock

    sleep 2 # Dar margen para procesar la última cola de mensajes

    # 7. Guardar Mapa
    echo "      Bag finalizado. Guardando el mapa mapa_hector_${i}..."
    ros2 run nav2_map_server map_saver_cli -f mapa_hector_${i} --ros-args -p use_sim_time:=true

    # 8. Limpieza
    echo "      Limpiando procesos de la iteración $i..."
    kill $NODE_PID $GRID_PID $RVIZ_PID $METRICS_PID $TRAYECTORIA_PID 2>/dev/null
    pkill -f rviz2
    pkill -f cartographer_node
    pkill -f cartographer_occupancy
    
    sleep 5
done

echo "=== ¡TODAS LAS EJECUCIONES DE FALSO HECTOR COMPLETADAS! ==="