import pandas as pd
import matplotlib.pyplot as plt
import glob
import os

script_dir = os.path.dirname(__file__)
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
    
    fig1, (ax1, ax2) = plt.subplots(1, 2, figsize=(15, 5))
    for algo in algorithms_all:
        data = df_final[df_final['Algorithm'] == algo]
        if not data.empty:
            ax1.plot(data['Time_s'], data['CPU(%)'], label=algo)
            ax2.plot(data['Time_s'], data['RAM(MB)'], label=algo)
            
    ax1.set_title('CPU Usage (%) - All Algorithms')
    ax2.set_title('RAM Usage (MB) - All Algorithms')
    ax1.legend()
    ax2.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, 'global_performance_metrics.png'))

    fig2, (ax3, ax4) = plt.subplots(1, 2, figsize=(15, 5))
    for algo in algorithms_2d:
        data = df_final[df_final['Algorithm'] == algo]
        if not data.empty:
            ax3.plot(data['Time_s'], data['CPU(%)'], label=algo)
            ax4.plot(data['Time_s'], data['RAM(MB)'], label=algo)
            
    ax3.set_title('CPU Usage (%) - 2D Algorithms')
    ax4.set_title('RAM Usage (MB) - 2D Algorithms')
    ax3.legend()
    ax4.legend()
    plt.tight_layout()
    plt.savefig(os.path.join(perf_out_dir, '2d_performance_metrics.png'))