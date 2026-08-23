#!/bin/bash

echo "=== INICIANDO AUTOMATIZACIÓN: FALSO HECTOR (Binarios Directos) ==="

echo "[1/5] Arrancando Cartographer (Sin Odometría)..."

# Llamamos directamente al binario C++ de Cartographer
/opt/ros/jazzy/lib/cartographer_ros/cartographer_node \
    -configuration_directory /home/pharanguren/TFG/DataCartographerHector \
    -configuration_basename cartographer_hector.lua \
    --ros-args -p use_sim_time:=true -r scan:=/scan -r odom:=/odom -r tf:=/tf -r tf_static:=/tf_static > log_cartographer.txt 2>&1 &
NODE_PID=$!

/opt/ros/jazzy/lib/cartographer_ros/cartographer_occupancy_grid_node \
    -resolution 0.05 -publish_period_sec 1.0 \
    --ros-args -p use_sim_time:=true -r map:=/map > log_grid.txt 2>&1 &
GRID_PID=$!

echo "      ¡Nodo C++ lanzado! (PID: $NODE_PID)"
sleep 2

# Seguro de vida: comprobamos si el nodo sigue vivo
if ! ps -p $NODE_PID > /dev/null; then
    echo -e "\nERROR FATAL: Cartographer ha crasheado. Revisa log_cartographer.txt"
    kill $GRID_PID 2>/dev/null
    bash -c "kill -9 $$" 2>/dev/null || exit 1
fi

echo "      Grabando métricas del PID $NODE_PID en metricas_hector.csv"
echo "CPU(%),RAM(MB)" > metricas_hector.csv
(
    while ps -p $NODE_PID > /dev/null; do
        RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
        echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_hector.csv
        sleep 0.5
    done
) &
METRICS_PID=$!

echo "[3/5] Abriendo RViz2..."
ros2 run rviz2 rviz2 -d ~/TFG/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
RVIZ_PID=$!

# Damos margen para que RViz y el árbol TF (tf_static) se asienten bien
sleep 5

echo "[4/5] Reproduciendo bag_maze. ¡Espera a que termine!"
ros2 bag play ~/TFG/bag_maze --clock

echo "[5/5] Bag finalizado. Guardando el mapa..."
ros2 run nav2_map_server map_saver_cli -f mapa_hector

echo "Limpiando y cerrando procesos..."
kill $NODE_PID $GRID_PID $RVIZ_PID $METRICS_PID 2>/dev/null
pkill -f rviz2
pkill -f cartographer_node
pkill -f cartographer_occupancy

echo "=== ¡TERCER EXPERIMENTO COMPLETADO CON ÉXITO! ==="