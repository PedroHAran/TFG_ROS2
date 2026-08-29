#!/bin/bash

echo "========================================================"
echo " INICIANDO PIPELINE DE ANÁLISIS DE DATOS - TFG"
echo "========================================================"

# 1. Ejecutar Análisis de Trayectorias (TUM + EVO)
echo -e "\n>> [Fase 1/3] Extrayendo trayectorias y evaluando con EVO..."
bash scripts/analyze_trajectories.sh

# 2. Ejecutar Análisis de Calidad de Mapas (Áreas y Esquinas)
echo -e "\n>> [Fase 2/3] Evaluando calidad geométrica de los mapas..."
python3 scripts/analyze_maps.py

# 3. Ejecutar Análisis de Rendimiento (CPU / RAM)
echo -e "\n>> [Fase 3/3] Evaluando rendimiento computacional..."
python3 scripts/analyze_performance.py

echo -e "\n========================================================"
echo " ¡ANÁLISIS COMPLETADO! Todos los resultados están en 'results/'"
echo "========================================================"