#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You did't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*Action)(void);

	Action actions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	size_t i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*actions[i])();
			return;
		}
		i++;
	}
}