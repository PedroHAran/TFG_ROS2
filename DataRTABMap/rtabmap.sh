#!/bin/bash

MAP=$1
if [ -z "$MAP" ]; then
    echo "Error: Map name required (maze, depot, warehouse)"
    exit 1
fi

mkdir -p $HOME/TFG/DataRTABMap/$MAP
cd $HOME/TFG/DataRTABMap/$MAP

echo "=== STARTING RTAB-MAP - MAP: $MAP (3 RUNS) ==="

for i in {1..3}
do
    echo "--- Starting Run $i of 3 ---"

    ros2 launch rtabmap_launch rtabmap.launch.py \
        use_sim_time:=true \
        rtabmap_args:="--delete_db_on_start" \
        frame_id:=base_link \
        rgb_topic:=/oakd/rgb/preview/image_raw \
        depth_topic:=/oakd/rgb/preview/depth \
        camera_info_topic:=/oakd/rgb/preview/camera_info \
        subscribe_scan:=true \
        scan_topic:=/scan \
        approx_sync:=true \
        visual_odometry:=false \
        odom_topic:=/odom \
        rviz:=false \
        rtabmap_viz:=false > log_rtabmap_${MAP}_${i}.txt 2>&1 &
    
    NODE_LAUNCH_PID=$!

    echo -n "      Waiting for RTAB-Map to start"
    NODE_READY=false
    NODE_PID=""
    for j in {1..45}; do
        NODE_PID=$(pgrep -x "rtabmap" | head -n 1)
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
        echo -e "\nFATAL ERROR: RTAB-Map failed to start on iteration $i. Check logs."
        kill $NODE_LAUNCH_PID
        continue
    fi

    echo "      Recording metrics..."
    echo "CPU(%),RAM(MB)" > metrics_rtabmap_${MAP}_${i}.csv
    (
        while ps -p $NODE_PID > /dev/null; do
            RAW_DATA=$(ps -p $NODE_PID -o %cpu,rss --no-headers)
            echo $RAW_DATA | awk '{printf "%.1f,%.1f\n", $1, $2/1024}' >> metrics_rtabmap_${MAP}_${i}.csv
            sleep 0.5
        done
    ) &
    METRICS_PID=$!

    echo "      Opening RViz2..."
    ros2 run rviz2 rviz2 -d $HOME/TFG/Rviz/configuration_rtab.rviz --ros-args -p use_sim_time:=true > /dev/null 2>&1 &
    RVIZ_PID=$!

    sleep 5

    echo "      Recording trajectory..."
    ros2 bag record -o bag_trajectory_rtabmap_${MAP}_${i} /tf /tf_static /odom /rtabmap/pose /sim_ground_truth_pose > /dev/null 2>&1 &
    TRAJECTORY_PID=$!

    echo "      Playing bag_${MAP}..."
    ros2 bag play $HOME/TFG/Bags/bag_$MAP --clock

    sleep 2 

    echo "      Bag finished. Saving map..."
    ros2 run nav2_map_server map_saver_cli -t /rtabmap/map -f map_rtabmap_${MAP}_${i} --ros-args -p use_sim_time:=true

    echo "      Cleaning up processes..."
    kill $NODE_LAUNCH_PID $RVIZ_PID $METRICS_PID $TRAJECTORY_PID 2>/dev/null
    pkill -f rviz2
    pkill -x rtabmap
    pkill -f rtabmap.launch.py
    
    sleep 5
done