#!/bin/bash
mkdir build
mkdir kitti
mkdir pcd
cd build
cmake ..
make
cp visualizer ../visualizer
