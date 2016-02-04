#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <pcl/visualization/cloud_viewer.h>
#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>
#include <string>
#include "buildfilestring.h"

class ImageViewer
{
	private:
		std::string filename;

	public:
		ImageViewer(int number = 0)
		{
			this->filename = buildFileString(number);
		}

		void Show()
		{
			pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
			pcl::visualization::CloudViewer viewer ("Simple Cloud Viewer");
			pcl::io::loadPCDFile (this->filename, *cloud);
			viewer.showCloud (cloud);

			while (!viewer.wasStopped ())
			{
			}
		}
};

#endif
