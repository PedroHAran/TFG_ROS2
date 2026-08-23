#!/bin/bash

echo "=== INICIANDO AUTOMATIZACIÓN DE RTAB-MAP (5 EJECUCIONES) ==="

for i in {1..5}
do
    echo "--- Iniciando Ejecución $i de 5 ---"

    # 1. Arrancar RTAB-Map (Fusionando RGB-D y LiDAR)
    ros2 launch rtabmap_launch rtabmap.launch.py \
        use_sim_time:=true \
        rtabmap_args:="--delete_db_on_start" \
        frame_id:=base_link \
        rgb_topic:=/oakd/rgb/preview/image_raw \
        depth_topic:=/oakd/rgb/preview/depth \
        camera_info_topic:=/oakd/rgb/preview/camera_info \
        subscribe_scan:=true \
        scan_topic:=/scan \
        approx_sync:=true \
        visual_odometry:=false \
        odom_topic:=/odom \
        rviz:=false \
        rtabmap_viz:=false > log_rtabmap_${i}.txt 2>&1 &
    
    NODE_LAUNCH_PID=$!

    echo -n "      Esperando a que arranque RTAB-Map"
    NODO_LISTO=false
    NODE_PID=""
    for j in {1..45}; do
        NODE_PID=$(pgrep -x "rtabmap" | head -n 1)
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
        echo -e "\nERROR FATAL: RTAB-Map no arrancó en la iteración $i. Revisa log_rtabmap_${i}.txt"
        kill $NODE_LAUNCH_PID
        continue
    fi

    # 2. Iniciar monitorización de CPU/RAM
    echo "      Grabando métricas en metricas_rtabmap_${i}.csv"
    echo "CPU(%),RAM(MB)" > metricas_rtabmap_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_rtabmap_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    # 3. Abrir RViz2
    echo "      Abriendo RViz2..."
    ros2 run rviz2 rviz2 -d ~/TFG/Rviz/configuration_rtab.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    # 4. Grabar Trayectoria
    echo "      Grabando trayectoria en bag_trayectoria_rtabmap_${i}..."
    ros2 bag record -o bag_trayectoria_rtabmap_${i} /tf /tf_static /odom /rtabmap/pose > /dev/null 2>&1 &
    TRAYECTORIA_PID=$!

    # 5. Reproducir Bag
    echo "      Reproduciendo bag_warehouse..."
    ros2 bag play ~/TFG/Bags/bag_warehouse --clock

    sleep 2 # Margen para el cierre del grafo

    # 6. Guardar Mapa 2D proyectado
    echo "      Bag finalizado. Guardando el mapa mapa_rtabmap_${i}..."
    ros2 run nav2_map_server map_saver_cli -t /rtabmap/map -f mapa_rtabmap_${i} --ros-args -p use_sim_time:=true

    # 7. Limpieza Segura (Evita el suicidio del script)
    echo "      Limpiando procesos de la iteración $i..."
    kill $NODE_LAUNCH_PID $RVIZ_PID $METRICS_PID $TRAYECTORIA_PID 2>/dev/null
    pkill -f rviz2
    # Usamos -x para matar SOLO el ejecutable "rtabmap" y no tu script "rtabmap.sh"
    pkill -x rtabmap
    pkill -f rtabmap.launch.py
    
    sleep 5
done

echo "=== ¡TODAS LAS EJECUCIONES DE RTAB-MAP COMPLETADAS! ==="