#!/bin/bash

MAP=$1
if [ -z "$MAP" ]; then
    echo "Error: Map name required (maze, depot, warehouse)"
    exit 1
fi

mkdir -p $HOME/TFG/DataMrptRbpf/$MAP
cd $HOME/TFG/DataMrptRbpf/$MAP

echo "=== STARTING MRPT RBPF SLAM - MAP: $MAP (3 RUNS) ==="

source $HOME/TFG/mrpt_ws/install/setup.bash

for i in {1..3}
do
    echo "--- Starting Run $i of 3 ---"

    ros2 run mrpt_rbpf_slam mrpt_rbpf_slam \
        --ros-args -p use_sim_time:=true \
        -p base_frame_id:=base_link \
        -p odom_frame_id:=odom \
        -p sensor_source:=scan \
        -p ini_filename:=$HOME/TFG/mrpt_ws/install/mrpt_rbpf_slam/share/mrpt_rbpf_slam/tutorial/grid_slam_demo.ini > log_mrpt_${MAP}_${i}.txt 2>&1 &
    
    sleep 5
    NODE_PID=$(pgrep -x "mrpt_rbpf_slam" | head -n 1)

    echo "      Recording metrics..."
    echo "CPU(%),RAM(MB)" > metrics_mrpt_${MAP}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metrics_mrpt_${MAP}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    echo "      Opening RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    echo "      Recording trajectory..."
    ros2 bag record -o bag_trajectory_mrpt_${MAP}_${i} /tf /tf_static /odom /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAJECTORY_PID=$!

    echo "      Playing bag_${MAP}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAP --clock

    sleep 2 

    echo "      Bag finished. Saving map..."
    ros2 run nav2_map_server map_saver_cli -f map_mrpt_${MAP}_${i} --ros-args -p use_sim_time:=true

    echo "      Cleaning up processes..."
    kill $NODE_PID $RVIZ_PID $METRICS_PID $TRAJECTORY_PID 2>/dev/null
    pkill -f rviz2
    pkill -x mrpt_rbpf_slam
    
    sleep 5
done