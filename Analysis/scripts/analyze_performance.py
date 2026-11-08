import pandas as pd
import matplotlib.pyplot as plt
import glob
import os

script_dir = os.path.dirname(os.path.abspath(__file__))
base_path = os.path.abspath(os.path.join(script_dir, '../..'))
perf_out_dir = os.path.join(script_dir, '../results/performance')
os.makedirs(perf_out_dir, exist_ok=True)

algorithms_all = ['slam_toolbox', 'cartographer', 'mrpt', 'lama', 'rtabmap']
algorithms_2d = ['slam_toolbox', 'cartographer', 'mrpt', 'lama']
cpu_ram_results = []

for algo in algorithms_all:
    csv_files = glob.glob(os.path.join(base_path, '**', f"metricas_{algo}*.csv"), recursive=True)
    if not csv_files:
        continue
        
    dfs = []
    for f in csv_files:
        df = pd.read_csv(f)
        df.columns = df.columns.str.strip() 
        df['Time_s'] = df.index * 0.5
        dfs.append(df)
        
    df_concat = pd.concat(dfs)
    df_mean = df_concat.groupby('Time_s').mean().reset_index()
    df_mean['Algorithm'] = algo
    cpu_ram_results.append(df_mean)

if cpu_ram_results:
    df_final = pd.concat(cpu_ram_results)
    
    plt.figure(figsize=(8, 5))
    for algo in algorithms_2d:
        data = df_final[df_final['Algorithm'] == algo]
        if not data.empty:
            plt.plot(data['Time_s'], data['CPU(%)'], label=algo)
    plt.title('Evolución CPU (%) - Algoritmos 2D')
    plt.xlabel('Tiempo (s)')
    plt.ylabel('Uso de CPU (%)')
    plt.legend()
    plt.grid(True, linestyle='--', alpha=0.6)
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, '2d_cpu_metrics.pdf'), bbox_inches='tight')
    plt.close()

    plt.figure(figsize=(8, 5))
    for algo in algorithms_2d:
        data = df_final[df_final['Algorithm'] == algo]
        if not data.empty:
            plt.plot(data['Time_s'], data['RAM(MB)'], label=algo)
    plt.title('Evolución RAM (MB) - Algoritmos 2D')
    plt.xlabel('Tiempo (s)')
    plt.ylabel('Consumo de RAM (MB)')
    plt.legend()
    plt.grid(True, linestyle='--', alpha=0.6)
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, '2d_ram_metrics.pdf'), bbox_inches='tight')
    plt.close()

    plt.figure(figsize=(8, 5))
    for algo in algorithms_all:
        data = df_final[df_final['Algorithm'] == algo]
        if not data.empty:
            plt.plot(data['Time_s'], data['CPU(%)'], label=algo)
    plt.title('Evolución CPU (%) - Todos los algoritmos')
    plt.xlabel('Tiempo (s)')
    plt.ylabel('Uso de CPU (%)')
    plt.legend()
    plt.grid(True, linestyle='--', alpha=0.6)
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, 'global_cpu_metrics.pdf'), bbox_inches='tight')
    plt.close()

    plt.figure(figsize=(8, 5))
    for algo in algorithms_all:
        data = df_final[df_final['Algorithm'] == algo]
        if not data.empty:
            plt.plot(data['Time_s'], data['RAM(MB)'], label=algo)
    plt.title('Evolución RAM (MB) - Todos los algoritmos')
    plt.xlabel('Tiempo (s)')
    plt.ylabel('Consumo de RAM (MB)')
    plt.legend()
    plt.grid(True, linestyle='--', alpha=0.6)
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, 'global_ram_metrics.pdf'), bbox_inches='tight')
    plt.close()