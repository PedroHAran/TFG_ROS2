import cv2 as cv
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import glob
import os

# Valores estándar de map_saver_cli
unknown_value = 205
free_value = 254
occupied_value = 0

# ==========================================
# FASE 2.1: FUNCIONES DE CALIDAD DE MAPAS (TFM)
# ==========================================

def get_occupied_proportion(image):
    """Calcula la proporción estricta de píxeles etiquetados como 0"""
    image_float = image.astype(float)
    occupied_proportion = np.sum(image_float == occupied_value) / image_float.size
    return occupied_proportion

def get_num_corners(image):
    """Detecta esquinas en el espacio libre"""
    # Umbral: Los píxeles de espacio libre son blancos, el resto (muros e ignoto) negros
    _, binary_image = cv.threshold(image, unknown_value, free_value, cv.THRESH_BINARY)
    
    gray_float = np.float32(binary_image)
    dst = cv.cornerHarris(gray_float, blockSize=3, ksize=3, k=0.04)
    
    threshold_val = 0.01 * dst.max()
    corners = np.where(dst > threshold_val)
    
    return len(corners[0])

def get_num_enclosed_areas(image):
    """Contabiliza el número total de regiones conectadas independientes"""
    _, binary_image = cv.threshold(image, unknown_value, free_value, cv.THRESH_BINARY)
    
    num_labels, _ = cv.connectedComponents(np.uint8(binary_image))
    return num_labels

# ==========================================
# FASE 2.2: ANÁLISIS DE MAPAS
# ==========================================
algoritmos_2d = ['slam_toolbox', 'cartographer', 'hector']
metricas_mapas = {'Algoritmo': [], 'Areas_Encerradas': [], 'Esquinas': [], 'Proporcion_Ocupada': []}

base_path = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))

print("=== INICIANDO ANÁLISIS DE IMÁGENES ===")
for algo in algoritmos_2d:
    busqueda_mapa = glob.glob(os.path.join(base_path, '**', f"mapa_{algo}_1.pgm"), recursive=True)
    
    if busqueda_mapa:
        mapa_path = busqueda_mapa[0]
        img = cv.imread(mapa_path, cv.IMREAD_GRAYSCALE)
        
        areas = get_num_enclosed_areas(img)
        esquinas = get_num_corners(img)
        proporcion = get_occupied_proportion(img)
        
        metricas_mapas['Algoritmo'].append(algo)
        metricas_mapas['Areas_Encerradas'].append(areas)
        metricas_mapas['Esquinas'].append(esquinas)
        metricas_mapas['Proporcion_Ocupada'].append(proporcion)
        
        print(f"[{algo}] Áreas: {areas} | Esquinas: {esquinas} | Prop. Ocupada: {proporcion:.4f}")
    else:
        print(f"Advertencia: No se encontró mapa para {algo}")

# ==========================================
# FASE 2.3: ANÁLISIS DE RENDIMIENTO (CPU/RAM)
# ==========================================
algoritmos_todos = ['slam_toolbox', 'cartographer', 'hector', 'rtabmap']
resultados_cpu_ram = []

print("\n=== INICIANDO ANÁLISIS DE RENDIMIENTO ===")
for algo in algoritmos_todos:
    archivos_csv = glob.glob(os.path.join(base_path, '**', f"metricas_{algo}_*.csv"), recursive=True)
    
    if not archivos_csv:
        print(f"Advertencia: No hay CSVs para {algo}")
        continue
        
    dfs = []
    for f in archivos_csv:
        df = pd.read_csv(f)
        df.columns = df.columns.str.strip() 
        df['Tiempo_s'] = df.index * 0.5
        dfs.append(df)
        
    df_concat = pd.concat(dfs)
    df_mean = df_concat.groupby('Tiempo_s').mean().reset_index()
    df_mean['Algoritmo'] = algo
    resultados_cpu_ram.append(df_mean)
    print(f"Procesados {len(archivos_csv)} archivos CSV de {algo}")

# ==========================================
# FASE 2.4: GENERACIÓN DE GRÁFICAS
# ==========================================
print("\n=== GENERANDO GRÁFICAS ===")
output_dir = os.path.dirname(__file__)

# 1. Gráficas geométricas de mapas
if metricas_mapas['Algoritmo']:
    fig, axes = plt.subplots(1, 3, figsize=(18, 5))
    
    axes[0].bar(metricas_mapas['Algoritmo'], metricas_mapas['Areas_Encerradas'], color='orange')
    axes[0].set_title('Número de áreas encerradas')
    
    axes[1].bar(metricas_mapas['Algoritmo'], metricas_mapas['Esquinas'], color='green')
    axes[1].set_title('Número de esquinas')
    
    axes[2].bar(metricas_mapas['Algoritmo'], metricas_mapas['Proporcion_Ocupada'], color='tab:blue')
    axes[2].set_title('Proporción de píxeles ocupados')
    
    plt.tight_layout()
    ruta_mapas = os.path.join(output_dir, 'metricas_calidad_mapas.png')
    plt.savefig(ruta_mapas)
    print(f"-> Guardado: {ruta_mapas}")

if resultados_cpu_ram:
    df_final = pd.concat(resultados_cpu_ram)
    
    # 2. Gráfica de Rendimiento GLOBAL (Con RTAB-Map)
    fig1, (ax1, ax2) = plt.subplots(1, 2, figsize=(15, 5))
    for algo in algoritmos_todos:
        datos = df_final[df_final['Algoritmo'] == algo]
        ax1.plot(datos['Tiempo_s'], datos['CPU(%)'], label=algo)
        ax2.plot(datos['Tiempo_s'], datos['RAM(MB)'], label=algo)
        
    ax1.set_title('Uso de CPU (%) - Global')
    ax1.set_xlabel('Tiempo (s)')
    ax1.set_ylabel('CPU (%)')
    ax1.legend()
    
    ax2.set_title('Uso de Memoria RAM (MB) - Global')
    ax2.set_xlabel('Tiempo (s)')
    ax2.set_ylabel('RAM (MB)')
    ax2.legend()
    
    plt.tight_layout()
    ruta_rendimiento_global = os.path.join(output_dir, 'metricas_rendimiento_global.png')
    plt.savefig(ruta_rendimiento_global)
    print(f"-> Guardado: {ruta_rendimiento_global}")

    # 3. Gráfica de Rendimiento DETALLADA 2D (Sin RTAB-Map)
    fig2, (ax3, ax4) = plt.subplots(1, 2, figsize=(15, 5))
    for algo in algoritmos_2d:
        datos = df_final[df_final['Algoritmo'] == algo]
        ax3.plot(datos['Tiempo_s'], datos['CPU(%)'], label=algo)
        ax4.plot(datos['Tiempo_s'], datos['RAM(MB)'], label=algo)
        
    ax3.set_title('Uso de CPU (%) - Algoritmos 2D')
    ax3.set_xlabel('Tiempo (s)')
    ax3.set_ylabel('CPU (%)')
    ax3.legend()
    
    ax4.set_title('Uso de Memoria RAM (MB) - Algoritmos 2D')
    ax4.set_xlabel('Tiempo (s)')
    ax4.set_ylabel('RAM (MB)')
    ax4.legend()
    
    plt.tight_layout()
    ruta_rendimiento_2d = os.path.join(output_dir, 'metricas_rendimiento_2d.png')
    plt.savefig(ruta_rendimiento_2d)
    print(f"-> Guardado: {ruta_rendimiento_2d}")

print("=== EVALUACIÓN COMPLETADA ===")