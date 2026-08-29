import pandas as pd
import matplotlib.pyplot as plt
import glob
import os

script_dir = os.path.dirname(__file__)
base_path = os.path.abspath(os.path.join(script_dir, '../..'))
perf_out_dir = os.path.join(script_dir, '../results/performance')

algoritmos_todos = ['slam_toolbox', 'cartographer', 'mrpt', 'lama', 'rtabmap']
algoritmos_2d = ['slam_toolbox', 'cartographer', 'mrpt', 'lama']
resultados_cpu_ram = []

for algo in algoritmos_todos:
    archivos_csv = glob.glob(os.path.join(base_path, '**', f"metricas_{algo}*.csv"), recursive=True)
    if not archivos_csv:
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

if resultados_cpu_ram:
    df_final = pd.concat(resultados_cpu_ram)
    
    fig1, (ax1, ax2) = plt.subplots(1, 2, figsize=(15, 5))
    for algo in algoritmos_todos:
        datos = df_final[df_final['Algoritmo'] == algo]
        if not datos.empty:
            ax1.plot(datos['Tiempo_s'], datos['CPU(%)'], label=algo)
            ax2.plot(datos['Tiempo_s'], datos['RAM(MB)'], label=algo)
            
    ax1.set_title('Uso de CPU (%) - Todos los Algoritmos')
    ax2.set_title('Uso de RAM (MB) - Todos los Algoritmos')
    ax1.legend(); ax2.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, 'metricas_rendimiento_global.png'))

    fig2, (ax3, ax4) = plt.subplots(1, 2, figsize=(15, 5))
    for algo in algoritmos_2d:
        datos = df_final[df_final['Algoritmo'] == algo]
        if not datos.empty:
            ax3.plot(datos['Tiempo_s'], datos['CPU(%)'], label=algo)
            ax4.plot(datos['Tiempo_s'], datos['RAM(MB)'], label=algo)
            
    ax3.set_title('Uso de CPU (%) - Algoritmos 2D')
    ax4.set_title('Uso de RAM (MB) - Algoritmos 2D')
    ax3.legend(); ax4.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, 'metricas_rendimiento_2d.png'))