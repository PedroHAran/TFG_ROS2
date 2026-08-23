#!/bin/bash

echo "=== INICIANDO EVALUACIÓN MASIVA DE TRAYECTORIAS ==="

# Definimos los algoritmos y sus carpetas correspondientes
declare -A CARPETAS
CARPETAS=(
    ["slam_toolbox"]="DataSLAMToolbox"
    ["cartographer"]="DataCartographer"
    ["hector"]="DataCartographerHector"
    ["rtabmap"]="DataRTABMap"
)

# Iteramos sobre cada algoritmo
for algo in "${!CARPETAS[@]}"; do
    carpeta_origen="${CARPETAS[$algo]}"
    
    echo "---------------------------------------------------"
    echo "Procesando algoritmo: $algo"
    echo "---------------------------------------------------"

    # Iteramos sobre las 5 pasadas
    for i in {1..5}; do
        echo "  -> Iteración $i de 5..."
        
        RUTA_BAG="$HOME/TFG/$carpeta_origen/bag_trayectoria_${algo}_${i}"
        NOMBRE_BASE="${algo}_${i}"
        
        if [ ! -d "$RUTA_BAG" ]; then
            echo "     [AVISO] No se encuentra el bag: $RUTA_BAG. Saltando..."
            continue
        fi

        # 1. Extraer los datos al formato TUM usando tu script anterior
        ./extract_trayectories.sh "$RUTA_BAG" "$NOMBRE_BASE" > /dev/null 2>&1
        
        # 2. Comprobar que la extracción ha ido bien
        if [ -f "trayectoria_${NOMBRE_BASE}_odom.tum" ] && [ -f "trayectoria_${NOMBRE_BASE}_slam.tum" ]; then
            
            # 3. Lanzar evo_ape, alinear y guardar resultados de forma silenciosa
            echo "     Calculando Error Absoluto y guardando gráficas..."
            evo_ape tum trayectoria_${NOMBRE_BASE}_odom.tum trayectoria_${NOMBRE_BASE}_slam.tum \
                -a --save_plot grafica_${NOMBRE_BASE}.png --save_results metricas_${NOMBRE_BASE}.zip > /dev/null 2>&1
                
            echo "     ¡Completado $NOMBRE_BASE!"
        else
            echo "     [ERROR] Fallo al generar los TUM de $NOMBRE_BASE."
        fi
    done
done

echo "=== ¡EVALUACIÓN COMPLETADA! Revisa tu carpeta Analysis. ==="