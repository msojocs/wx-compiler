#ifndef __FILE_H__
#define __FILE_H__
#include <string>

int readFile (const char*  fileName, std::string &result);
std::string getNextArg(std::string &data, std::string const & lineEndMark);

#endif