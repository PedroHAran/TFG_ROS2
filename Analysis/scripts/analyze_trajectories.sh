#!/bin/bash

declare -A CARPETAS=(
    ["slam_toolbox"]="DataSLAMToolbox"
    ["cartographer"]="DataCartographer"
    ["mrpt"]="DataMrptRbpf"
    ["lama"]="DataIrisLama"
    ["rtabmap"]="DataRTABMap"
)
MAPAS=("maze" "depot" "warehouse")

for algo in "${!CARPETAS[@]}"; do
    carpeta_origen="${CARPETAS[$algo]}"
    echo "  -> Procesando algoritmo: $algo"

    for mapa in "${MAPAS[@]}"; do
        for i in {1..3}; do
            RUTA_BAG="$HOME/TFG/$carpeta_origen/$mapa/bag_trayectoria_${algo}_${mapa}_${i}"
            NOMBRE_BASE="${algo}_${mapa}_${i}"
            
            if [ ! -d "$RUTA_BAG" ]; then
                continue
            fi

            python3 scripts/extract_tum.py > /dev/null 2>&1 &
            EXTRACTOR_PID=$!
            sleep 2
            
            ros2 bag play "$RUTA_BAG" --clock -r 5 > /dev/null 2>&1
            sleep 2
            
            kill -INT $EXTRACTOR_PID
            wait $EXTRACTOR_PID 2>/dev/null

            if [ -f "trayectoria_slam.tum" ] && [ -f "trayectoria_odom.tum" ]; then
                mv trayectoria_slam.tum "results/tum/trayectoria_${NOMBRE_BASE}_slam.tum"
                mv trayectoria_odom.tum "results/tum/trayectoria_${NOMBRE_BASE}_odom.tum"
                
                evo_ape tum "results/tum/trayectoria_${NOMBRE_BASE}_odom.tum" "results/tum/trayectoria_${NOMBRE_BASE}_slam.tum" \
                    -a --save_plot "results/evo/grafica_${NOMBRE_BASE}.png" --save_results "results/evo/metricas_${NOMBRE_BASE}.zip" > /dev/null 2>&1
            fi
        done
    done
done