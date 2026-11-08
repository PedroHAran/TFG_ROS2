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
    _, binary = cv.threshold(image, 200, 255, cv.THRESH_BINARY_INV)
    kernel = np.ones((3, 3), np.uint8)
    binary = cv.morphologyEx(binary, cv.MORPH_CLOSE, kernel)
    
    corners = cv.goodFeaturesToTrack(
        image=binary,
        maxCorners=1000,
        qualityLevel=0.08,
        minDistance=10,
        blockSize=3,
        useHarrisDetector=True,
        k=0.04
    )
    return len(corners) if corners is not None else 0

def get_num_enclosed_areas(image):
    _, binary_image = cv.threshold(image, unknown_value, free_value, cv.THRESH_BINARY)
    binary_image = np.uint8(binary_image)
    
    kernel = np.ones((3, 3), np.uint8)
    cleaned = cv.morphologyEx(binary_image, cv.MORPH_CLOSE, kernel)
    
    num_labels, _, stats, _ = cv.connectedComponentsWithStats(cleaned)
    valid_areas = 0
    for i in range(1, num_labels):
        if stats[i, cv.CC_STAT_AREA] >= 20:
            valid_areas += 1
            
    return valid_areas

script_dir = os.path.dirname(os.path.abspath(__file__))
base_path = os.path.abspath(os.path.join(script_dir, '../..'))
maps_out_dir = os.path.join(script_dir, '../results/maps')
os.makedirs(maps_out_dir, exist_ok=True)

algorithms_2d = ['slam_toolbox', 'cartographer', 'mrpt', 'lama']
environments = ['maze', 'depot', 'warehouse']

map_metrics = {
    env: {'Enclosed_Areas': [], 'Corners': [], 'Occupied_Proportion': []}
    for env in environments
}

for env in environments:
    for algo in algorithms_2d:
        map_search = glob.glob(os.path.join(base_path, '**', f"mapa_{algo}_{env}_*.pgm"), recursive=True)
        if map_search:
            areas, corners, occ = [], [], []
            for map_path in map_search:
                img = cv.imread(map_path, cv.IMREAD_GRAYSCALE)
                if img is not None:
                    areas.append(get_num_enclosed_areas(img))
                    corners.append(get_num_corners(img))
                    occ.append(get_occupied_proportion(img))
            
            map_metrics[env]['Enclosed_Areas'].append(np.mean(areas))
            map_metrics[env]['Corners'].append(np.mean(corners))
            map_metrics[env]['Occupied_Proportion'].append(np.mean(occ))
        else:
            map_metrics[env]['Enclosed_Areas'].append(0)
            map_metrics[env]['Corners'].append(0)
            map_metrics[env]['Occupied_Proportion'].append(0)

x = np.arange(len(algorithms_2d))
width = 0.25
colors = {'maze': 'tab:blue', 'depot': 'tab:orange', 'warehouse': 'tab:green'}

def save_grouped_plot(metric_key, title, filename):
    plt.figure(figsize=(8, 5))
    for i, env in enumerate(environments):
        offset = (i - 1) * width
        plt.bar(x + offset, map_metrics[env][metric_key], width, label=env.capitalize(), color=colors[env])
    
    plt.title(title)
    plt.xticks(x, algorithms_2d)
    plt.legend(title='Environment')
    plt.grid(axis='y', linestyle='--', alpha=0.4)
    plt.tight_layout()
    plt.savefig(os.path.join(maps_out_dir, filename))
    plt.close()

save_grouped_plot('Enclosed_Areas', 'Number of enclosed areas', 'metrics_enclosed_areas.pdf')
save_grouped_plot('Corners', 'Number of detected corners', 'metrics_corners.pdf')
save_grouped_plot('Occupied_Proportion', 'Occupied pixel proportion', 'metrics_occupied_proportion.pdf')