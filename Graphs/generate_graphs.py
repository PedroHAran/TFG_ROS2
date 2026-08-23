import pandas as pd
import matplotlib.pyplot as plt
import os

# 1. Función para leer 3 CSVs, recortarlos a la misma longitud mínima y promediarlos
def obtener_media_experimento(rutas_csv):
    dataframes = []
    for ruta in rutas_csv:
        if os.path.exists(ruta):
            df = pd.read_csv(ruta)
            dataframes.append(df)
        else:
            print(f"ADVERTENCIA: No se encontró {ruta}")
            
    if not dataframes:
        return None
        
    # Encontrar la longitud mínima por si algún bag duró 1 o 2 segundos menos
    min_length = min(len(df) for df in dataframes)
    
    # Recortar todos a la misma longitud
    dfs_recortados = [df.iloc[:min_length] for df in dataframes]
    
    # Calcular la media
    df_media = sum(dfs_recortados) / len(dfs_recortados)
    return df_media

# 2. Definimos dónde están los archivos de cada experimento (rutas relativas al home)
experimentos = {
    'SLAM Toolbox': [
        os.path.expanduser('~/TFG/DataSLAMToolbox/metricas_slam_toolbox_1.csv'),
        os.path.expanduser('~/TFG/DataSLAMToolbox/metricas_slam_toolbox_2.csv'),
        os.path.expanduser('~/TFG/DataSLAMToolbox/metricas_slam_toolbox_3.csv')
    ],
    'Cartographer (Completo)': [
        os.path.expanduser('~/TFG/DataCartographer/metricas_cartographer_1.csv'),
        os.path.expanduser('~/TFG/DataCartographer/metricas_cartographer_2.csv'),
        os.path.expanduser('~/TFG/DataCartographer/metricas_cartographer_3.csv')
    ],
    'Cartographer (Solo Láser)': [
        os.path.expanduser('~/TFG/DataCartographerHector/metricas_hector_1.csv'),
        os.path.expanduser('~/TFG/DataCartographerHector/metricas_hector_2.csv'),
        os.path.expanduser('~/TFG/DataCartographerHector/metricas_hector_3.csv')
    ]
}

colores = {
    'SLAM Toolbox': '#1f77b4',
    'Cartographer (Completo)': '#ff7f0e',
    'Cartographer (Solo Láser)': '#2ca02c'
}

# 3. Crear la gráfica
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(10, 8), dpi=300)

print("--- RESUMEN DE MEDIAS GLOBALES PARA LA MEMORIA DEL TFG ---")

for etiqueta, rutas in experimentos.items():
    df_promedio = obtener_media_experimento(rutas)
    
    if df_promedio is not None:
        tiempo_segundos = df_promedio.index * 0.5
        
        # Calcular medias globales para el texto del TFG
        media_cpu = df_promedio['CPU(%)'].mean()
        media_ram = df_promedio['RAM(MB)'].mean()
        max_ram = df_promedio['RAM(MB)'].max()
        print(f"{etiqueta}:")
        print(f"  - CPU Media: {media_cpu:.2f}%")
        print(f"  - RAM Media: {media_ram:.2f} MB (Máximo: {max_ram:.2f} MB)")
        
        # Graficar (USAMOS .get() PARA EVITAR EL KEYERROR, color por defecto negro '#000000')
        ax1.plot(tiempo_segundos, df_promedio['CPU(%)'], label=etiqueta, color=colores.get(etiqueta.strip(), '#000000'), linewidth=1.5, alpha=0.8)
        ax2.plot(tiempo_segundos, df_promedio['RAM(MB)'], label=etiqueta, color=colores.get(etiqueta.strip(), '#000000'), linewidth=1.5, alpha=0.8)

# 4. Dar formato
ax1.set_title('Comparativa de Consumo de CPU a lo largo del tiempo (Media de 3 ejecuciones)', fontsize=12, fontweight='bold')
ax1.set_ylabel('Uso de CPU (%)', fontsize=10)
ax1.grid(True, linestyle='--', alpha=0.7)
ax1.legend(loc='upper left') # Cambiado a upper left por si tapa datos

ax2.set_title('Comparativa de Consumo de Memoria RAM a lo largo del tiempo (Media de 3 ejecuciones)', fontsize=12, fontweight='bold')
ax2.set_xlabel('Tiempo de ejecución (segundos)', fontsize=10)
ax2.set_ylabel('Uso de RAM (MB)', fontsize=10)
ax2.grid(True, linestyle='--', alpha=0.7)
ax2.legend(loc='upper left') # Cambiado a upper left por si tapa datos

plt.tight_layout()

# 5. Guardar la imagen en la carpeta Graphs
archivo_salida = os.path.expanduser('~/TFG/Graphs/comparativa_promediada.png')
plt.savefig(archivo_salida)
print(f"\n¡Gráfica generada con éxito! Guardada en: {archivo_salida}")