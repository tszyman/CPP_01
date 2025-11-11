#include "FtReplace.hpp"
#include <iostream>

FtReplace::FtReplace(const std::string &inputFilename,
					const std::string &s1,
					const std::string &s2)
					: _s1(s1),
					_s2(s2),
					_inputFile(inputFilename),
					_outputFile(inputFilename + ".replace")
					{};

std::string FtReplace::_replaceInLine(const std::string &line) const
{
	if (_s1.empty())
		return line;
	std::string result;
	std::size_t pos = 0;
	std::size_t found;

	while ((found = line.find(_s1, pos)) != std::string::npos)
	{
		result.append(line, pos, found - pos);		// append from pos to found
		result.append(_s2);							// append replacement string
		pos = found + _s1.length();					// update pos past the match
	}
	result.append(line, pos, line.length() - pos);	// append the rest of the line
	return result;
}

int FtReplace::run()
{
	if (!_inputFile.openForRead())
	{
		std::cerr << "Error: Could not open input file.\n";
		return 1;	
	}
	if (!_outputFile.openForWrite())
	{
		std::cerr << "Error: Could not open output file. \n";
		return 1;
	}
	std::string line;
	while (_inputFile.readLine(line))
	{
		std::string replaced = _replaceInLine(line);
		if(!_outputFile.writeLine(replaced))
		{
			std::cerr << "Error: failed to write to output file. \n";
			return 1;
		}
	}
	return 0;
}
