#ifndef __BUILDFILESTRING_H
#define __BUILDFILESTRING_H

#include <string>
#include "zeropad.h"

std::string buildFileString(int number)
{
	return "pcd/000000"+zeroPadNumber(4,number)+".pcd";
}

#endif //__BUILDFILESTRING_H
