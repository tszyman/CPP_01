#ifndef FTFILE_HPP
#define FTFILE_HPP
#include <fstream>
#include <string>

class FtFile
{
	public:
		FtFile(const std::string &filename);
		~FtFile();

		bool openForRead();
		bool openForWrite();

		bool readLine(std::string &line);
		bool writeLine(const std::string &line);

		void close();
	private:
		std::string _filename;
		std::ifstream _inFile;
		std::ofstream _outFile;
};
#endif