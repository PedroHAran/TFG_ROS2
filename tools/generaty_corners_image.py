#!/usr/bin/env python3
import cv2 as cv
import numpy as np
import os
import argparse

def generate_corners_image(image_path, output_filename):
    # Resuelve la ruta dinámicamente: tools/ -> TFG/results/images_harris
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(script_dir, '..'))
    output_dir = os.path.join(repo_root, 'results', 'images_harris')
    os.makedirs(output_dir, exist_ok=True)
    
    output_path = os.path.join(output_dir, output_filename)

    img = cv.imread(image_path, cv.IMREAD_GRAYSCALE)
    if img is None:
        print(f"[ERROR] Could not read image: {image_path}")
        return

    img_color = cv.cvtColor(img, cv.COLOR_GRAY2BGR)
    _, binary = cv.threshold(img, 200, 255, cv.THRESH_BINARY_INV)
    dst = cv.cornerHarris(np.float32(binary), blockSize=2, ksize=3, k=0.04)

    kernel = np.ones((3, 3), np.uint8)
    dst = cv.dilate(dst, kernel, iterations=2)

    threshold = 0.01 * dst.max()
    img_color[dst > threshold] = [0, 0, 255]

    cv.imwrite(output_path, img_color)
    print(f"[OK] Successfully saved to: {output_path}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process SLAM maps and extract corners using Harris corner detector.")
    parser.add_argument("-i", "--input", required=True, help="Input image path (e.g., map.pgm)")
    parser.add_argument("-o", "--output", required=True, help="Output filename (e.g., cartographer_corners.png)")

    args = parser.parse_args()
    generate_corners_image(args.input, args.output)