#!/bin/bash

# Uso: ./extraer_todo.sh /ruta/al/bag carpeta_destino_o_nombre
# Ejemplo: ./extraer_todo.sh ~/TFG/DataCartographer/bag_trayectoria_cartographer_1 cartographer_1

BAG_PATH=$1
NOMBRE_SALIDA=$2

if [ -z "$BAG_PATH" ] || [ -z "$NOMBRE_SALIDA" ]; then
    echo "Uso: $0 <ruta_del_bag> <nombre_base_salida>"
    exit 1
fi

echo "=== INICIANDO EXTRACCIÓN AUTOMÁTICA PARA: $NOMBRE_SALIDA ==="

# 1. Lanzar el script de Python en segundo plano
python3 trayectories.py &
EXTRACTOR_PID=$!

# Dar un par de segundos para que el nodo rclpy arranque y escuche el /tf
sleep 2

# 2. Reproducir el bag con sim_time activado (--clock)
echo "Reproduciendo el bag..."
ros2 bag play "$BAG_PATH" --clock

# Dar un pequeño margen para que procese los últimos mensajes del buffer
sleep 2

# 3. Matar el nodo extractor de forma limpia para que guarde los archivos
echo "Finalizando extracción..."
kill -INT $EXTRACTOR_PID
wait $EXTRACTOR_PID 2>/dev/null

# 4. Renombrar los archivos generados para que no se sobrescriban
if [ -f "trayectoria_slam.tum" ] && [ -f "trayectoria_odom.tum" ]; then
    mv trayectoria_slam.tum "trayectoria_${NOMBRE_SALIDA}_slam.tum"
    mv trayectoria_odom.tum "trayectoria_${NOMBRE_SALIDA}_odom.tum"
    echo "¡Éxito! Archivos guardados como trayectoria_${NOMBRE_SALIDA}_slam.tum / odom.tum"
else
    echo "ERROR: No se generaron los archivos TUM correctamente."
fi