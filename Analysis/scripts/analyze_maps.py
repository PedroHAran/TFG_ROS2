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

algoritmos_2d = ['slam_toolbox', 'cartographer', 'mrpt', 'lama']
metricas_mapas = {'Algoritmo': [], 'Areas_Encerradas': [], 'Esquinas': [], 'Proporcion_Ocupada': []}

for algo in algoritmos_2d:
    busqueda_mapa = glob.glob(os.path.join(base_path, '**', f"mapa_{algo}*_1.pgm"), recursive=True)
    if busqueda_mapa:
        img = cv.imread(busqueda_mapa[0], cv.IMREAD_GRAYSCALE)
        metricas_mapas['Algoritmo'].append(algo)
        metricas_mapas['Areas_Encerradas'].append(get_num_enclosed_areas(img))
        metricas_mapas['Esquinas'].append(get_num_corners(img))
        metricas_mapas['Proporcion_Ocupada'].append(get_occupied_proportion(img))

if metricas_mapas['Algoritmo']:
    fig, axes = plt.subplots(1, 3, figsize=(18, 5))
    axes[0].bar(metricas_mapas['Algoritmo'], metricas_mapas['Areas_Encerradas'], color='orange')
    axes[0].set_title('Número de áreas encerradas')
    axes[1].bar(metricas_mapas['Algoritmo'], metricas_mapas['Esquinas'], color='green')
    axes[1].set_title('Número de esquinas detectadas')
    axes[2].bar(metricas_mapas['Algoritmo'], metricas_mapas['Proporcion_Ocupada'], color='tab:blue')
    axes[2].set_title('Proporción de píxeles ocupados')
    
    plt.tight_layout()
    plt.savefig(os.path.join(maps_out_dir, 'metricas_calidad_mapas.png'))