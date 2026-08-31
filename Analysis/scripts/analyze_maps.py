import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt
import glob
import os

unknown_value = 205
free_value = 254
occupied_value = 0

def get_occupied_proportion(image):
    image_float = image.astype(float)
    return np.sum(image_float == occupied_value) / image_float.size

def get_num_corners(image):
    _, binary_image = cv.threshold(image, unknown_value, free_value, cv.THRESH_BINARY)
    gray_float = np.float32(binary_image)
    dst = cv.cornerHarris(gray_float, blockSize=3, ksize=3, k=0.04)
    return len(np.where(dst > 0.01 * dst.max())[0])

def get_num_enclosed_areas(image):
    _, binary_image = cv.threshold(image, unknown_value, free_value, cv.THRESH_BINARY)
    num_labels, _ = cv.connectedComponents(np.uint8(binary_image))
    return num_labels

script_dir = os.path.dirname(__file__)
base_path = os.path.abspath(os.path.join(script_dir, '../..'))
maps_out_dir = os.path.join(script_dir, '../results/maps')
os.makedirs(maps_out_dir, exist_ok=True)

algorithms_2d = ['slam_toolbox', 'cartographer', 'mrpt', 'lama']
map_metrics = {'Algorithm': [], 'Enclosed_Areas': [], 'Corners': [], 'Occupied_Proportion': []}

for algo in algorithms_2d:
    map_search = glob.glob(os.path.join(base_path, '**', f"mapa_{algo}*_1.pgm"), recursive=True)
    if map_search:
        img = cv.imread(map_search[0], cv.IMREAD_GRAYSCALE)
        map_metrics['Algorithm'].append(algo)
        map_metrics['Enclosed_Areas'].append(get_num_enclosed_areas(img))
        map_metrics['Corners'].append(get_num_corners(img))
        map_metrics['Occupied_Proportion'].append(get_occupied_proportion(img))

if map_metrics['Algorithm']:
    fig, axes = plt.subplots(1, 3, figsize=(18, 5))
    axes[0].bar(map_metrics['Algorithm'], map_metrics['Enclosed_Areas'], color='orange')
    axes[0].set_title('Number of enclosed areas')
    axes[1].bar(map_metrics['Algorithm'], map_metrics['Corners'], color='green')
    axes[1].set_title('Number of detected corners')
    axes[2].bar(map_metrics['Algorithm'], map_metrics['Occupied_Proportion'], color='tab:blue')
    axes[2].set_title('Occupied pixel proportion')
    
    plt.tight_layout()
    plt.savefig(os.path.join(maps_out_dir, 'map_quality_metrics.png'))