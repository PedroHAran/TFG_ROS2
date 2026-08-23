import cv2
import numpy as np
import matplotlib.pyplot as plt
import os

# 1. Rutas a tus mapas (ahora son listas con las 3 ejecuciones por algoritmo)
mapas = {
    'SLAM Toolbox': [
        os.path.expanduser('~/TFG/DataSLAMToolbox/mapa_slam_toolbox_1.pgm'),
        os.path.expanduser('~/TFG/DataSLAMToolbox/mapa_slam_toolbox_2.pgm'),
        os.path.expanduser('~/TFG/DataSLAMToolbox/mapa_slam_toolbox_3.pgm')
    ],
    'Cartographer (Completo)': [
        os.path.expanduser('~/TFG/DataCartographer/mapa_cartographer_1.pgm'),
        os.path.expanduser('~/TFG/DataCartographer/mapa_cartographer_2.pgm'),
        os.path.expanduser('~/TFG/DataCartographer/mapa_cartographer_3.pgm')
    ],
    'Cartographer (Solo Láser)': [
        os.path.expanduser('~/TFG/DataCartographerHector/mapa_hector_1.pgm'),
        os.path.expanduser('~/TFG/DataCartographerHector/mapa_hector_2.pgm'),
        os.path.expanduser('~/TFG/DataCartographerHector/mapa_hector_3.pgm')
    ]
}

resultados_medios = {}

print("Procesando imágenes y calculando medias...")

# 2. Procesar cada algoritmo
for nombre, rutas in mapas.items():
    porcentajes_ocupado = []
    porcentajes_libre = []
    porcentajes_desconocido = []
    
    for ruta in rutas:
        if os.path.exists(ruta):
            # Leer imagen en escala de grises
            img = cv2.imread(ruta, cv2.IMREAD_GRAYSCALE)
            
            if img is not None:
                total_pixels = img.size
                
                # Contar píxeles (ajustando los umbrales estándar de ROS)
                ocupado = np.sum(img < 50)
                libre = np.sum(img > 250)
                desconocido = total_pixels - ocupado - libre
                
                porcentajes_ocupado.append((ocupado / total_pixels) * 100)
                porcentajes_libre.append((libre / total_pixels) * 100)
                porcentajes_desconocido.append((desconocido / total_pixels) * 100)
            else:
                print(f"ADVERTENCIA: No se pudo leer la imagen {ruta}")
        else:
            print(f"ADVERTENCIA: No se encontró la imagen {ruta}")
            
    # 3. Calcular la media de las 3 ejecuciones
    if porcentajes_ocupado: # Si al menos hay un mapa válido
        resultados_medios[nombre] = {
            'Ocupado (%)': np.mean(porcentajes_ocupado),
            'Libre (%)': np.mean(porcentajes_libre),
            'Desconocido (%)': np.mean(porcentajes_desconocido)
        }
    else:
        print(f"ERROR: No se encontraron mapas para {nombre}")

if resultados_medios:
    # 4. Imprimir resumen exacto en consola para la memoria del TFG
    print("\n--- RESULTADOS MEDIOS EXACTOS (3 EJECUCIONES) ---")
    for n in resultados_medios:
        print(f"{n}:")
        print(f"  - Espacio Libre: {resultados_medios[n]['Libre (%)']:.2f}%")
        print(f"  - Obstáculos:    {resultados_medios[n]['Ocupado (%)']:.2f}%")
        print(f"  - Desconocido:   {resultados_medios[n]['Desconocido (%)']:.2f}%")
    print("-------------------------------------------------\n")

    # 5. Preparar datos para la gráfica de barras apiladas
    nombres = list(resultados_medios.keys())
    ocupado = [resultados_medios[n]['Ocupado (%)'] for n in nombres]
    libre = [resultados_medios[n]['Libre (%)'] for n in nombres]
    desconocido = [resultados_medios[n]['Desconocido (%)'] for n in nombres]

    # Crear la gráfica
    fig, ax = plt.subplots(figsize=(10, 6), dpi=300)
    width = 0.5
    
    # Dibujar barras (apiladas)
    p1 = ax.bar(nombres, libre, width, label='Espacio Libre (Blanco)', color='#2ca02c')
    p2 = ax.bar(nombres, ocupado, width, bottom=libre, label='Obstáculos (Negro)', color='#d62728')
    p3 = ax.bar(nombres, desconocido, width, bottom=np.array(libre)+np.array(ocupado), label='Desconocido (Gris)', color='#7f7f7f')

    ax.set_ylabel('Porcentaje medio del Mapa (%)', fontsize=12)
    ax.set_title('Composición Media de los Mapas (Promedio de 3 ejecuciones)', fontsize=14, fontweight='bold')
    ax.legend(loc='lower left')
    
    # Añadir etiquetas de porcentaje en las barras (solo para ocupado y libre)
    for i, (l, o) in enumerate(zip(libre, ocupado)):
        ax.text(i, l/2, f'{l:.1f}%', ha='center', va='center', color='white', fontweight='bold')
        ax.text(i, l + o/2, f'{o:.1f}%', ha='center', va='center', color='white', fontweight='bold')

    plt.tight_layout()
    
    # Guardar en la carpeta Graphs
    archivo_salida = os.path.expanduser('~/TFG/Graphs/comparativa_mapas_medias.png')
    plt.savefig(archivo_salida)
    print(f"¡Gráfica guardada en: {archivo_salida}")