#include <iostream>
#include <fstream>
#include <string>
#include "FtReplace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << "<file_to_parse>, <string_to_be_replaced>, <string_to_replace>\n" << std::endl;
	return 0;
	}

	FtReplace program(argv[1], argv[2], argv[3]);
	return program.run();
}