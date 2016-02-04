#!/bin/bash
for file in kitti/*.bin
do 
	./kitti2pcd --infile $file --outfile pcd/`basename $file .bin`.pcd
done
