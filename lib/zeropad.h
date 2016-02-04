#ifndef __ZEROPAD_H
#define __ZEROPAD_H

#include <iomanip>
#include <sstream>
#include <string> 

std::string zeroPadNumber(int width, int num)
{
	std::ostringstream ss;
	ss << std::setw(width) << std::setfill('0') << num;
	return ss.str();
}

#endif //__ZEROPAD_H
