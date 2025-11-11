#ifndef FTREPLACE_HPP
#define FTREPLACE_HPP

#include "FtFile.hpp"
#include <string>

class FtReplace
{
public:
	FtReplace(const std::string &inputFilename,
			const std::string &s1,
			const std::string &s2);

	int run();
private:
	std::string _s1;
	std::string _s2;

	FtFile _inputFile;
	FtFile _outputFile;

	std::string _replaceInLine(const std::string &line) const;
};

#endif