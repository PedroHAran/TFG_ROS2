#!/bin/bash

MAP=$1
if [ -z "$MAP" ]; then
    echo "Error: Map name required (maze, depot, warehouse)"
    exit 1
fi

mkdir -p $HOME/TFG/DataSLAMToolbox/$MAP
cd $HOME/TFG/DataSLAMToolbox/$MAP

echo "=== STARTING SLAM TOOLBOX - MAP: $MAP (3 RUNS) ==="

for i in {1..3}
do
    echo "--- Starting Run $i of 3 ---"
    
    ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true > log_slam_${MAP}_${i}.txt 2>&1 &
    NODE_LAUNCH_PID=$!

    echo -n "      Waiting for SLAM Toolbox to start"
    NODE_READY=false
    NODE_PID=""
    for j in {1..45}; do
        NODE_PID=$(pgrep -f "async_slam_toolbox_node" | grep -v "\.sh" | head -n 1)
        if [ -n "$NODE_PID" ]; then
            echo -e "\n      Node found! (PID: $NODE_PID)"
            NODE_READY=true
            sleep 2
            break
        fi
        echo -n "."
        sleep 1
    done

    if [ "$NODE_READY" = false ]; then
        echo -e "\nERROR: SLAM Toolbox failed to start on iteration $i. Check logs."
        kill $NODE_LAUNCH_PID
        continue
    fi

    echo "      Recording metrics..."
    echo "CPU(%),RAM(MB)" > metrics_slam_toolbox_${MAP}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metrics_slam_toolbox_${MAP}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    echo "      Opening RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!
    
    sleep 5
    
    echo "      Recording trajectory..."
    ros2 bag record -o bag_trajectory_slam_toolbox_${MAP}_${i} /tf /tf_static /odom /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAJECTORY_PID=$!

    echo "      Playing bag_${MAP}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAP --clock
    
    sleep 2 

    echo "      Bag finished. Saving map..."
    ros2 run nav2_map_server map_saver_cli -f map_slam_toolbox_${MAP}_${i} --ros-args -p use_sim_time:=true

    echo "      Cleaning up processes..."
    kill $NODE_LAUNCH_PID $RVIZ_PID $METRICS_PID $TRAJECTORY_PID 2>/dev/null
    pkill -f rviz2
    pkill -f async_slam_toolbox
    
    sleep 5 
done