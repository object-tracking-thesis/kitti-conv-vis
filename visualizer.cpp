#include "lib/imageviewer.h"
#include "lib/movieviewer.h"
#include <iostream>
#include <vector>
#include <sstream>

/*
 * for image run ./visualizer i frame:int
 * e.g. ./visualizer i 18
 *
 * for movie run ./visualizer m refresh:float startframe:int stopframe:int
 * e.g. ./visualizer m 0.5 10 50
 *
 * */
int main(int argc, char** argv)
{
	if (argc > 0)
	{
		std::vector<int> args;
		for (int i = 2; i < argc; ++i) {
			std::istringstream ss(argv[i]);
			int x;
			if (ss >> x)
				args.push_back(x);
		}

		if (std::string(argv[1]) == "v" || std::string(argv[1]) == "m")
		{
			MovieViewer *movie = new MovieViewer(args[0], args[1], args[2]);
			movie->Show();
		}
		else
		{
			ImageViewer *image = new ImageViewer(args[0]);
			image->Show();
		}
	}
}
