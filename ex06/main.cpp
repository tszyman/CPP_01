#include "Harl.hpp"
#include <iostream>

int get_level_id(const std::string& level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t i = 0;
	
	while (i < 4)
	{
		if (levels[i] == level)
			return i;
		i++;
	}
	return -1;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}

	Harl harl;
	int level_id = get_level_id(argv[1]);

	switch (level_id)
	{
		case 0:
			harl.complain("DEBUG");
			/* fall through */
		case 1:
			harl.complain("INFO");
			/* fall through */
		case 2:
			harl.complain("WARNING");
			/* fall through */
		case 3:
			harl.complain("ERROR");
			/* fall through */
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}