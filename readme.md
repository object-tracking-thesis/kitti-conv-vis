#Visualizer for .pcd files using PCL Cloud Viewer
##prerequisites
* .pcd files with usual KITTI naming convention '0000000001.pcd' in /pcd/

##displaying a single frame
for single frame (image) run ./visualizer i frame:int  
e.g. ./visualizer i 18

##displaying a movie composed of several frames
for movie run ./visualizer m refresh:float startframe:int stopframe:int  
e.g. ./visualizer m 0.5 10 50
