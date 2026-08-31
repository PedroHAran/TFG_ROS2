#!/bin/bash

format_time() {
    local T=$1
    local H=$((T/3600))
    local M=$(((T%3600)/60))
    local S=$((T%60))
    printf "%02d hours, %02d minutes and %02d seconds\n" $H $M $S
}

ALGORITHM=$1
MAPS=("maze" "depot" "warehouse")
START_TIME_GLOBAL=$(date +%s)

DUR_SLAM=0
DUR_CART=0
DUR_RTAB=0
DUR_MRPT=0
DUR_LAMA=0

echo "========================================================"
if [ -z "$ALGORITHM" ]; then
    echo " STARTING FULL PIPELINE (ALL ALGORITHMS)"
else
    echo " STARTING INDIVIDUAL PIPELINE: $ALGORITHM"
fi
echo " Maps to process: ${MAPS[*]}"
echo "========================================================"

if [ -z "$ALGORITHM" ] || [ "$ALGORITHM" == "slam_toolbox" ]; then
    START_TIME=$(date +%s)
    for map in "${MAPS[@]}"; do
        echo ">> [SLAM TOOLBOX] Starting evaluation on map: $map"
        bash $HOME/TFG/DataSLAMToolbox/slam_toolbox.sh $map
    done
    DUR_SLAM=$(( $(date +%s) - START_TIME ))
    echo ">> [INFO] SLAM Toolbox completed in: $(format_time $DUR_SLAM)"
    echo "---------------------------------------------------------"
fi

if [ -z "$ALGORITHM" ] || [ "$ALGORITHM" == "cartographer" ]; then
    START_TIME=$(date +%s)
    for map in "${MAPS[@]}"; do
        echo ">> [CARTOGRAPHER] Starting evaluation on map: $map"
        bash $HOME/TFG/DataCartographer/cartographer.sh $map
    done
    DUR_CART=$(( $(date +%s) - START_TIME ))
    echo ">> [INFO] Cartographer completed in: $(format_time $DUR_CART)"
    echo "---------------------------------------------------------"
fi

if [ -z "$ALGORITHM" ] || [ "$ALGORITHM" == "mrpt" ]; then
    START_TIME=$(date +%s)
    for map in "${MAPS[@]}"; do
        echo ">> [MRPT SLAM] Starting evaluation on map: $map"
        bash $HOME/TFG/DataMrptRbpf/mrpt_rbpf.sh $map
    done
    DUR_MRPT=$(( $(date +%s) - START_TIME ))
    echo ">> [INFO] MRPT SLAM completed in: $(format_time $DUR_MRPT)"
    echo "---------------------------------------------------------"
fi

if [ -z "$ALGORITHM" ] || [ "$ALGORITHM" == "lama" ]; then
    START_TIME=$(date +%s)
    for map in "${MAPS[@]}"; do
        echo ">> [IRIS LAMA] Starting evaluation on map: $map"
        bash $HOME/TFG/DataIrisLama/iris_lama.sh $map
    done
    DUR_LAMA=$(( $(date +%s) - START_TIME ))
    echo ">> [INFO] Iris LAMA completed in: $(format_time $DUR_LAMA)"
    echo "---------------------------------------------------------"
fi

if [ -z "$ALGORITHM" ] || [ "$ALGORITHM" == "rtabmap" ]; then
    START_TIME=$(date +%s)
    for map in "${MAPS[@]}"; do
        echo ">> [RTAB-MAP] Starting evaluation on map: $map"
        bash $HOME/TFG/DataRTABMap/rtabmap.sh $map
    done
    DUR_RTAB=$(( $(date +%s) - START_TIME ))
    echo ">> [INFO] RTAB-Map completed in: $(format_time $DUR_RTAB)"
    echo "---------------------------------------------------------"
fi

TOTAL_DUR=$(( $(date +%s) - START_TIME_GLOBAL ))

echo "========================================================"
echo " PIPELINE FINISHED."
echo "========================================================"
echo " SUMMARY OF EXECUTION TIMES:"
[ $DUR_SLAM -gt 0 ] && echo "   - SLAM Toolbox : $(format_time $DUR_SLAM)"
[ $DUR_CART -gt 0 ] && echo "   - Cartographer : $(format_time $DUR_CART)"
[ $DUR_MRPT -gt 0 ] && echo "   - MRPT SLAM    : $(format_time $DUR_MRPT)"
[ $DUR_LAMA -gt 0 ] && echo "   - Iris LAMA    : $(format_time $DUR_LAMA)"
[ $DUR_RTAB -gt 0 ] && echo "   - RTAB-Map     : $(format_time $DUR_RTAB)"
echo " ------------------------------------------------------"
echo "   - TOTAL TIME   : $(format_time $TOTAL_DUR)"
echo "========================================================"