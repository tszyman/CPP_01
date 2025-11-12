#include "Harl.hpp"
#include <iostream>

int main(void)
{
	Harl harl;
	std::cout<< "\nIn order\n";
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	std::cout<< "\nOut of original order\n";
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	std::cout<< "--- END ---\n";

	return 0;
}