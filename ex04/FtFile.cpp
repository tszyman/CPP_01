#include "FtFile.hpp"

FtFile::FtFile(const std::string &filename) : _filename(filename) {}

FtFile::~FtFile()
{
	close();
}

bool FtFile::openForRead()
{
	_inFile.open(_filename.c_str());
	return _inFile.is_open();
}

bool FtFile::openForWrite()
{
	_outFile.open(_filename.c_str());
	return _outFile.is_open();
}

bool FtFile::readLine(std::string &line)
{
	if (!_inFile.is_open())
		return false;
	
	return static_cast<bool>(std::getline(_inFile, line));
}

bool FtFile::writeLine(const std::string &line)
{
	if (!_outFile.is_open())
		return false;
	
	_outFile << line << "\n";
	return static_cast<bool>(_outFile);
}

void FtFile::close()
{
	if (_inFile.is_open())
		_inFile.close();
	if (_outFile.is_open())
		_outFile.close();
}