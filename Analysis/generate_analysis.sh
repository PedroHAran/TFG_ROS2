#!/bin/bash

mkdir -p results

echo "========================================================"
echo " STARTING DATA ANALYSIS PIPELINE"
echo "========================================================"

echo -e "\n>> [Phase 1/3] Extracting trajectories and evaluating with EVO..."
bash scripts/analyze_trajectories.sh

echo -e "\n>> [Phase 2/3] Evaluating map geometric quality..."
python3 scripts/analyze_maps.py

echo -e "\n>> [Phase 3/3] Evaluating computational performance..."
python3 scripts/analyze_performance.py

echo -e "\n========================================================"
echo " ANALYSIS COMPLETED! All results are stored in 'results/'"
echo "========================================================"