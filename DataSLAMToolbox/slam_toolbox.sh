#!/bin/bash

echo "=== INICIANDO AUTOMATIZACIÓN DE SLAM TOOLBOX (5 EJECUCIONES) ==="

for i in {1..5}
do
    echo "--- Iniciando Ejecución $i de 5 ---"
    
    # 1. Arrancar SLAM Toolbox
    ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true > log_slam_${i}.txt 2>&1 &
    NODE_LAUNCH_PID=$!

    echo -n "Esperando a que arranque SLAM Toolbox"
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
        echo -e "\nERROR: SLAM Toolbox no arrancó en la iteración $i. Revisa log_slam_${i}.txt"
        kill $NODE_LAUNCH_PID
        continue # Pasa a la siguiente iteración
    fi

    # 2. Iniciar monitorización
    echo "      Grabando métricas en metricas_slam_toolbox_${i}.csv"
    echo "CPU(%),RAM(MB)" > metricas_slam_toolbox_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_slam_toolbox_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    # 3. Abrir RViz
    echo "      Abriendo RViz2..."
    ros2 run rviz2 rviz2 -d ~/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!
    
    sleep 5
    
    echo "      Grabando trayectoria en bag_trayectoria_slam_toolbox_${i}..."
    ros2 bag record -o bag_trayectoria_slam_toolbox_${i} /tf /tf_static /odom > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    # 4. Reproducir Bag
    echo "      Reproduciendo bag_warehouse..."
    ros2 bag play ~/TFG/Bags/bag_warehouse --clock
    
    sleep 2 # Dar margen a SLAM Toolbox para procesar la última cola de mensajes

    # 5. Guardar Mapa
    echo "      Bag finalizado. Guardando el mapa mapa_slam_toolbox_${i}..."
    ros2 run nav2_map_server map_saver_cli -f mapa_slam_toolbox_${i} --ros-args -p use_sim_time:=true

    # 6. Limpieza
    echo "      Limpiando procesos de la iteración $i..."
    kill $NODE_LAUNCH_PID $RVIZ_PID $METRICS_PID $TRAYECTORIA_PID 2>/dev/null
    pkill -f rviz2
    pkill -f async_slam_toolbox
    
    sleep 5 # Pausa entre ejecuciones para que el sistema respire
done

echo "=== ¡TODAS LAS EJECUCIONES DE SLAM TOOLBOX COMPLETADAS! ==="