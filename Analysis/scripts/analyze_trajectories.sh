#!/bin/bash

mkdir -p results/tum results/evo

declare -A FOLDERS=(
    ["slam_toolbox"]="DataSLAMToolbox"
    ["cartographer"]="DataCartographer"
    ["mrpt"]="DataMrptRbpf"
    ["lama"]="DataIrisLama"
    ["rtabmap"]="DataRTABMap"
)
MAPS=("maze" "depot" "warehouse")

for algo in "${!FOLDERS[@]}"; do
    source_folder="${FOLDERS[$algo]}"
    echo "  -> Processing algorithm: $algo"

    for map in "${MAPS[@]}"; do
        for i in {1..3}; do
            BAG_PATH="$HOME/TFG/$source_folder/$map/bag_trayectoria_${algo}_${map}_${i}"
            BASE_NAME="${algo}_${map}_${i}"
            
            if [ ! -d "$BAG_PATH" ]; then
                continue
            fi

            python3 scripts/extract_tum.py > /dev/null 2>&1 &
            EXTRACTOR_PID=$!
            sleep 2
            
            ros2 bag play "$BAG_PATH" --clock -r 5 > /dev/null 2>&1
            sleep 2
            
            kill -INT $EXTRACTOR_PID
            wait $EXTRACTOR_PID 2>/dev/null

            if [ -f "trajectory_slam.tum" ] && [ -f "trajectory_odom.tum" ]; then
                mv trajectory_slam.tum "results/tum/trajectory_${BASE_NAME}_slam.tum"
                mv trajectory_odom.tum "results/tum/trajectory_${BASE_NAME}_odom.tum"
                
                evo_ape tum "results/tum/trajectory_${BASE_NAME}_odom.tum" "results/tum/trajectory_${BASE_NAME}_slam.tum" \
                    -a --save_plot "results/evo/plot_${BASE_NAME}.png" --save_results "results/evo/metrics_${BASE_NAME}.zip" > /dev/null 2>&1
            fi
        done
    done
done