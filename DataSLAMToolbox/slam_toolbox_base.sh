#!/bin/bash

echo "=== INICIANDO AUTOMATIZACIÓN DE SLAM TOOLBOX ==="

echo "[1/5] Arrancando SLAM Toolbox..."
# Lanzamos el nodo. Sus logs caerán en la carpeta actual
ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true > log_slam_toolbox.txt 2>&1 &
SLAM_PID=$!

echo -n "[2/5] Esperando a que el nodo esté 100% operativo"
NODO_LISTO=false
# Bucle espía: leemos el log buscando la palabra mágica "Activating"
for i in {1..45}; do
    if grep -q "Activating" log_slam_toolbox.txt; then
        echo -e "\n      ¡SLAM Toolbox activado y listo para recibir datos!"
        NODO_LISTO=true
        break
    fi
    echo -n "."
    sleep 1
done

if [ "$NODO_LISTO" = false ]; then
    echo -e "\nERROR: SLAM Toolbox se quedó colgado. Revisa log_slam_toolbox.txt"
    kill $SLAM_PID
    bash -c "kill -9 $$" 2>/dev/null || exit 1
fi

# Ahora que sabemos que está listo, cazamos su PID para grabarle el consumo
NODE_PID=$(pgrep -f "async_slam_toolbox_node" | grep -v "\.sh" | head -n 1)

echo "      Grabando métricas del PID $NODE_PID en metricas_slam_toolbox.csv"
echo "CPU(%),RAM(MB)" > metricas_slam_toolbox.csv

(
    while ps -p $NODE_PID > /dev/null; do
        RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
        echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metricas_slam_toolbox.csv
        sleep 0.5
    done
) &
METRICS_PID=$!

echo "[3/5] Abriendo RViz2..."
# Usamos ruta absoluta para que no vuelva a fallar nunca
ros2 run rviz2 rviz2 -d ~/TFG/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
RVIZ_PID=$!

# Le damos 3 segundos de cortesía a la ventana de RViz para que dibuje la interfaz
sleep 3

echo "[4/5] Reproduciendo bag_maze. ¡Espera a que termine!"
# Ruta absoluta para encontrar tu grabación sin fallo
ros2 bag play ~/TFG/bag_maze --clock

echo "[5/5] Bag finalizado. Guardando el mapa..."
# Al estar ya en tu carpeta, lo guardará directamente aquí
ros2 run nav2_map_server map_saver_cli -f mapa_slam_toolbox

echo "Limpiando y cerrando procesos..."
kill $SLAM_PID $RVIZ_PID $METRICS_PID 2>/dev/null
pkill -f rviz2
pkill -f "async_slam_toolbox_node"

echo "=== ¡EXPERIMENTO COMPLETADO CON ÉXITO! ==="