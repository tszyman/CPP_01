#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie(void); 					// default constructor
	Zombie(std::string name); 		// constructor for name initialization
	~Zombie(); 						// destructor
	void announce(void) const;
	void setName(std::string name); // setter for name

private:
	std::string name;
};

#endif // ZOMBIE_HPP