#!/usr/bin/env python3
import cv2 as cv
import numpy as np
import os
import argparse

def generate_corners_image(image_path, output_filename):
    # Crear la carpeta images_harris junto al script si no existe
    output_dir = "images_harris"
    os.makedirs(output_dir, exist_ok=True)
    
    output_path = os.path.join(output_dir, output_filename)

    # 1. Leer el mapa en escala de grises
    img = cv.imread(image_path, cv.IMREAD_GRAYSCALE)
    if img is None:
        print(f"[ERROR] No se pudo encontrar o leer la imagen: {image_path}")
        return

    # Crear una versión a color (BGR) para pintar los puntos en rojo vivo
    img_color = cv.cvtColor(img, cv.COLOR_GRAY2BGR)

    # 2. Binarizar el mapa
    _, binary = cv.threshold(img, 200, 255, cv.THRESH_BINARY_INV)

    # 3. Aplicar el detector de esquinas de Harris
    dst = cv.cornerHarris(np.float32(binary), blockSize=2, ksize=3, k=0.04)

    # 4. Dilatar fuertemente el resultado para que los puntos rojos se vean gordos y claros
    kernel = np.ones((3, 3), np.uint8)
    dst = cv.dilate(dst, kernel, iterations=2)

    # 5. Pintar de rojo [B, G, R] -> [0, 0, 255] las esquinas detectadas
    threshold = 0.01 * dst.max()
    img_color[dst > threshold] = [0, 0, 255]

    # 6. Guardar la imagen final
    cv.imwrite(output_path, img_color)
    print(f"[OK] Guardada con éxito en: {output_path}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Script para procesar mapas SLAM y extraer esquinas con Harris.")
    parser.add_argument("-i", "--input", required=True, help="Ruta de la imagen de entrada (ej: mapa.pgm)")
    parser.add_argument("-o", "--output", required=True, help="Nombre del archivo de salida (ej: cartographer_corners.png)")

    args = parser.parse_args()
    generate_corners_image(args.input, args.output)