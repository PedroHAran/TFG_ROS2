#!/bin/bash

REPO_ROOT=$(cd "$(dirname "$0")/.." && pwd)
cd "$REPO_ROOT"

echo "========================================================"
echo " INSTALLING TFG ROS 2 DEPENDENCIES"
echo "========================================================"

echo ">> Updating system packages..."
sudo apt-get update && sudo apt-get upgrade -y

echo ">> Installing ROS 2 SLAM packages and TurtleBot 4 Simulator..."
sudo apt-get install -y \
    ros-jazzy-slam-toolbox \
    ros-jazzy-cartographer-ros \
    ros-jazzy-rtabmap-ros \
    ros-jazzy-mrpt-slam \
    ros-jazzy-turtlebot4-simulator \
    ros-jazzy-nav2-map-server

echo ">> Installing Python evaluation dependencies (EVO, Pandas, OpenCV)..."
sudo apt-get install -y python3-pip python3-opencv
pip3 install evo --upgrade --break-system-packages
pip3 install pandas matplotlib numpy --break-system-packages

echo ">> Creating necessary workspace directories..."
mkdir -p "$REPO_ROOT/results" "$REPO_ROOT/Bags"

echo ">> Workspace setup complete! You can now run the analysis scripts from the tools/ folder."