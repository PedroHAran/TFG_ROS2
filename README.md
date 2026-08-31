# 2D SLAM Algorithms Evaluation in ROS 2 Jazzy

This repository contains the software architecture, automation scripts, and evaluation tools developed for a Bachelor's Thesis (*Trabajo de Fin de Grado - TFG*) focused on the comparative analysis of 2D SLAM (Simultaneous Localization and Mapping) algorithms.

Testing is conducted within the Gazebo simulation environment using a TurtleBot 4 robot, evaluating the algorithms under different geometric constraints (*Maze*, *Depot*, and *Warehouse* environments).

## Evaluated Algorithms
* **SLAM Toolbox**
* **Cartographer**
* **Iris LAMA** (Particle Filter)
* **MRPT SLAM** (RBPF)
* **RTAB-Map** (2D Configuration / Documented failure due to visual drift)

## System Requirements
* **OS:** Ubuntu 24.04 LTS
* **Framework:** ROS 2 Jazzy Jalisco
* **Python:** 3.12+ (with dependencies: `evo`, `pandas`, `opencv-python`, `matplotlib`)

## Installation and Setup

Clone this repository into your preferred directory and run the setup script to automatically install system dependencies, the TurtleBot 4 simulator, and the Python evaluation libraries:

```bash
git clone [https://github.com/PedroHAran/TFG_ROS2.git](https://github.com/PedroHAran/TFG_ROS2.git)
cd TFG_ROS2
bash tools/setup_workspace.sh