#!/bin/bash

# ==============================================================================
# SCRIPT MAESTRO DE EVALUACIÓN SLAM - TFG (CON CRONÓMETRO Y SELECTOR)
# ==============================================================================

# Función para formatear los segundos en Horas, Minutos y Segundos
formatear_tiempo() {
    local T=$1
    local H=$((T/3600))
    local M=$(((T%3600)/60))
    local S=$((T%60))
    printf "%02d horas, %02d minutos y %02d segundos\n" $H $M $S
}

# ---------------------------------------------------------
# LECTURA DE ARGUMENTOS E INICIO GLOBAL
# ---------------------------------------------------------
ALGORITMO=$1
MAPAS=("maze" "depot" "warehouse")
TIEMPO_INICIO_GLOBAL=$(date +%s)

# Inicializamos las duraciones a 0 por si algún algoritmo no se ejecuta
DURACION_SLAM=0
DURACION_CART=0
DURACION_RTAB=0
DURACION_MRPT=0
DURACION_LAMA=0

echo "========================================================"
if [ -z "$ALGORITMO" ]; then
    echo " INICIANDO PIPELINE COMPLETO (TODOS LOS ALGORITMOS)"
else
    echo " INICIANDO PIPELINE INDIVIDUAL: $ALGORITMO"
fi
echo " Mapas a procesar: ${MAPAS[*]}"
echo "========================================================"

# ---------------------------------------------------------
# 1. SLAM TOOLBOX
# ---------------------------------------------------------
if [ -z "$ALGORITMO" ] || [ "$ALGORITMO" == "slam_toolbox" ]; then
    TIEMPO_INICIO_SLAM=$(date +%s)
    for mapa in "${MAPAS[@]}"; do
        echo ">> [SLAM TOOLBOX] Iniciando evaluación en el mapa: $mapa"
        bash $HOME/TFG/DataSLAMToolbox/slam_toolbox.sh $mapa
    done
    TIEMPO_FIN_SLAM=$(date +%s)
    DURACION_SLAM=$((TIEMPO_FIN_SLAM - TIEMPO_INICIO_SLAM))
    echo ">> [INFO] SLAM Toolbox completado en: $(formatear_tiempo $DURACION_SLAM)"
    echo "---------------------------------------------------------"
fi

# ---------------------------------------------------------
# 2. CARTOGRAPHER
# ---------------------------------------------------------
if [ -z "$ALGORITMO" ] || [ "$ALGORITMO" == "cartographer" ]; then
    TIEMPO_INICIO_CART=$(date +%s)
    for mapa in "${MAPAS[@]}"; do
        echo ">> [CARTOGRAPHER] Iniciando evaluación en el mapa: $mapa"
        bash $HOME/TFG/DataCartographer/cartographer.sh $mapa
    done
    TIEMPO_FIN_CART=$(date +%s)
    DURACION_CART=$((TIEMPO_FIN_CART - TIEMPO_INICIO_CART))
    echo ">> [INFO] Cartographer completado en: $(formatear_tiempo $DURACION_CART)"
    echo "---------------------------------------------------------"
fi

# ---------------------------------------------------------
# 3. MRPT SLAM
# ---------------------------------------------------------
if [ -z "$ALGORITMO" ] || [ "$ALGORITMO" == "mrpt" ]; then
    TIEMPO_INICIO_MRPT=$(date +%s)
    for mapa in "${MAPAS[@]}"; do
        echo ">> [MRPT SLAM] Iniciando evaluación en el mapa: $mapa"
        bash $HOME/TFG/DataMrptRbpf/mrpt_rbpf.sh $mapa
    done
    TIEMPO_FIN_MRPT=$(date +%s)
    DURACION_MRPT=$((TIEMPO_FIN_MRPT - TIEMPO_INICIO_MRPT))
    echo ">> [INFO] MRPT SLAM completado en: $(formatear_tiempo $DURACION_MRPT)"
    echo "---------------------------------------------------------"
fi

# ---------------------------------------------------------
# 4. IRIS LAMA (Filtro de Partículas)
# ---------------------------------------------------------
if [ -z "$ALGORITMO" ] || [ "$ALGORITMO" == "lama" ]; then
    TIEMPO_INICIO_LAMA=$(date +%s)
    for mapa in "${MAPAS[@]}"; do
        echo ">> [IRIS LAMA] Iniciando evaluación en el mapa: $mapa"
        bash $HOME/TFG/DataIrisLama/iris_lama.sh $mapa
    done
    TIEMPO_FIN_LAMA=$(date +%s)
    DURACION_LAMA=$((TIEMPO_FIN_LAMA - TIEMPO_INICIO_LAMA))
    echo ">> [INFO] Iris LAMA completado en: $(formatear_tiempo $DURACION_LAMA)"
    echo "---------------------------------------------------------"
fi

# ---------------------------------------------------------
# 5. RTAB-MAP
# ---------------------------------------------------------
if [ -z "$ALGORITMO" ] || [ "$ALGORITMO" == "rtabmap" ]; then
    TIEMPO_INICIO_RTAB=$(date +%s)
    for mapa in "${MAPAS[@]}"; do
        echo ">> [RTAB-MAP] Iniciando evaluación en el mapa: $mapa"
        bash $HOME/TFG/DataRTABMap/rtabmap.sh $mapa
    done
    TIEMPO_FIN_RTAB=$(date +%s)
    DURACION_RTAB=$((TIEMPO_FIN_RTAB - TIEMPO_INICIO_RTAB))
    echo ">> [INFO] RTAB-Map completado en: $(formatear_tiempo $DURACION_RTAB)"
    echo "---------------------------------------------------------"
fi

# ---------------------------------------------------------
# FIN GLOBAL Y RESUMEN
# ---------------------------------------------------------
TIEMPO_FIN_GLOBAL=$(date +%s)
DURACION_TOTAL=$((TIEMPO_FIN_GLOBAL - TIEMPO_INICIO_GLOBAL))

echo "========================================================"
echo " PIPELINE FINALIZADO."
echo "========================================================"
echo " RESUMEN DE TIEMPOS DE EJECUCIÓN:"
[ $DURACION_SLAM -gt 0 ] && echo "   - SLAM Toolbox : $(formatear_tiempo $DURACION_SLAM)"
[ $DURACION_CART -gt 0 ] && echo "   - Cartographer : $(formatear_tiempo $DURACION_CART)"
[ $DURACION_MRPT -gt 0 ] && echo "   - MRPT SLAM    : $(formatear_tiempo $DURACION_MRPT)"
[ $DURACION_LAMA -gt 0 ] && echo "   - Iris LAMA    : $(formatear_tiempo $DURACION_LAMA)"
[ $DURACION_RTAB -gt 0 ] && echo "   - RTAB-Map     : $(formatear_tiempo $DURACION_RTAB)"
echo " ------------------------------------------------------"
echo "   - TIEMPO TOTAL : $(formatear_tiempo $DURACION_TOTAL)"
echo "========================================================"