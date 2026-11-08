#!/usr/bin/env python3
import cv2 as cv
import numpy as np
import os
import argparse

def generate_corners_image(image_path, output_filename):
    script_dir = os.path.dirname(os.path.abspath(__file__))
    repo_root = os.path.abspath(os.path.join(script_dir, '..'))
    output_dir = os.path.join(repo_root, 'tools', 'images_harris')
    os.makedirs(output_dir, exist_ok=True)
    
    output_path = os.path.join(output_dir, output_filename)

    img = cv.imread(image_path, cv.IMREAD_GRAYSCALE)
    if img is None:
        print(f"[ERROR] Could not read image: {image_path}")
        return

    img_color = cv.cvtColor(img, cv.COLOR_GRAY2BGR)
    
    _, binary = cv.threshold(img, 200, 255, cv.THRESH_BINARY_INV)
    
    kernel = np.ones((3, 3), np.uint8)
    binary = cv.morphologyEx(binary, cv.MORPH_CLOSE, kernel)

    corners = cv.goodFeaturesToTrack(
        image=binary,
        maxCorners=600,
        qualityLevel=0.08, 
        minDistance=10, 
        blockSize=3,
        useHarrisDetector=True, 
        k=0.04
    )

    if corners is not None:
        corners = np.int32(corners)
        for i in corners:
            x, y = i.ravel()
            cv.circle(img_color, (x, y), 2, (0, 0, 255), -1)

    cv.imwrite(output_path, img_color)
    print(f"[OK] Successfully saved to: {output_path} (Detected {len(corners) if corners is not None else 0} corners)")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Process SLAM maps and extract corners with clean non-max suppression.")
    parser.add_argument("-i", "--input", required=True, help="Input image path")
    parser.add_argument("-o", "--output", required=True, help="Output filename")

    args = parser.parse_args()
    generate_corners_image(args.input, args.output)