#ifndef MOVIEVIEWER_H
#define MOVIEVIEWER_H

#include <pcl/visualization/cloud_viewer.h>
#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>
#include <string>
#include "buildfilestring.h"

class MovieViewer
{
	private:
		float refresh;
		int start;
		int stop;

	public:
		MovieViewer(float refresh = 0.5, int start = 0, int stop = 9)
		{
			this->refresh = refresh;
			this->start = start;
			this->stop = stop;
		}

		void Show()
		{
			pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
			pcl::visualization::CloudViewer viewer ("Simple Cloud Viewer");
			for (int i=this->start; i <= this->stop; ++i)
			{
				std::string filename = buildFileString(i);

				pcl::io::loadPCDFile (filename, *cloud);
				viewer.showCloud (cloud);
				sleep(this->refresh);
			}
			while (!viewer.wasStopped ())
			{
			}
		}
};

#endif
