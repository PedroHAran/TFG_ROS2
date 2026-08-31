#!/bin/bash

MAP=$1
if [ -z "$MAP" ]; then
    echo "Error: Map name required (maze, depot, warehouse)"
    exit 1
fi

mkdir -p $HOME/TFG/DataIrisLama/$MAP
cd $HOME/TFG/DataIrisLama/$MAP

echo "=== STARTING IRIS LAMA (PF) - MAP: $MAP (3 RUNS) ==="

source $HOME/TFG/lama_ws/install/setup.bash

for i in {1..3}
do
    echo "--- Starting Run $i of 3 ---"

    ros2 launch iris_lama_ros2 pf_slam2d_live_launch.py use_sim_time:=true > log_lama_${MAP}_${i}.txt 2>&1 &
    
    sleep 5
    NODE_PID=$(pgrep -x "pf_slam2d_ros" | head -n 1)

    echo "      Recording metrics..."
    echo "CPU(%),RAM(MB)" > metrics_lama_${MAP}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metrics_lama_${MAP}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    echo "      Opening RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    echo "      Recording trajectory..."
    ros2 bag record -o bag_trajectory_lama_${MAP}_${i} /tf /tf_static /odom /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAJECTORY_PID=$!

    echo "      Playing bag_${MAP}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAP --clock &
    BAG_PID=$!

    echo "      Saving map periodically..."
    while kill -0 $BAG_PID 2>/dev/null; do
        ros2 run nav2_map_server map_saver_cli -f map_lama_${MAP}_${i} --ros-args -p use_sim_time:=true -p map_subscribe_transient_local:=false > /dev/null 2>&1
        sleep 3 
    done
    
    echo "      Bag finished. Final map saved."
    sleep 2

    echo "      Cleaning up processes..."
    kill $NODE_PID $METRICS_PID $TRAJECTORY_PID $RVIZ_PID 2>/dev/null
    pkill -f rviz2
    pkill -x pf_slam2d_ros
    
    sleep 5
done