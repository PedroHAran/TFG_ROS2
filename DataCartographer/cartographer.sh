#!/bin/bash

MAP=$1
if [ -z "$MAP" ]; then
    echo "Error: Map name required (maze, depot, warehouse)"
    exit 1
fi

mkdir -p $HOME/TFG/DataCartographer/$MAP
cd $HOME/TFG/DataCartographer/$MAP

echo "=== STARTING CARTOGRAPHER - MAP: $MAP (3 RUNS) ==="

for i in {1..3}
do
    echo "--- Starting Run $i of 3 ---"

    /opt/ros/jazzy/lib/cartographer_ros/cartographer_node \
        -configuration_directory $HOME/TFG/DataCartographer \
        -configuration_basename cartographer_config.lua \
        --ros-args -p use_sim_time:=true -r scan:=/scan -r odom:=/odom -r tf:=/tf -r tf_static:=/tf_static > log_cartographer_${MAP}_${i}.txt 2>&1 &
    NODE_PID=$!

    /opt/ros/jazzy/lib/cartographer_ros/cartographer_occupancy_grid_node \
        -resolution 0.05 -publish_period_sec 1.0 \
        --ros-args -p use_sim_time:=true -r map:=/map > log_grid_${MAP}_${i}.txt 2>&1 &
    GRID_PID=$!

    sleep 2

    if ! ps -p $NODE_PID > /dev/null; then
        echo -e "\nFATAL ERROR: Cartographer crashed on iteration $i. Check logs."
        kill $GRID_PID 2>/dev/null
        continue
    fi

    echo "      Recording metrics..."
    echo "CPU(%),RAM(MB)" > metrics_cartographer_${MAP}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metrics_cartographer_${MAP}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    echo "      Opening RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    echo "      Recording trajectory..."
    ros2 bag record -o bag_trajectory_cartographer_${MAP}_${i} /tf /tf_static /odom /trajectory_node_list /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAJECTORY_PID=$!

    echo "      Playing bag_${MAP}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAP --clock

    sleep 2 

    echo "      Bag finished. Saving map..."
    ros2 run nav2_map_server map_saver_cli -f map_cartographer_${MAP}_${i} --ros-args -p use_sim_time:=true

    echo "      Cleaning up processes..."
    kill $NODE_PID $GRID_PID $RVIZ_PID $METRICS_PID $TRAJECTORY_PID 2>/dev/null
    pkill -f rviz2
    pkill -f cartographer_node
    pkill -f cartographer_occupancy
    
    sleep 5
done