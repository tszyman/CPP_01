#include <iostream>
#include <string>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	// Printing adresses
	std::cout << "Address of brain: " << &brain << std::endl; 					//&brain gives the address of the variable brain
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;		//stringPTR holds the address of brain
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;		//&stringREF gives the address of the variable brain

	// Printing values
	std::cout << "Value of brain: " << brain << std::endl;						//prints the value of brain
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;	// *stringPTR dereferences the pointer to get the value of brain
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;	//stringREF is a reference to brain, so it gives the value of brain

	//Change the brain variable
	brain = "NEW BRAIN VALUE";
	std::cout << "\nAfter changing the brain variable:\n" << std::endl;

	std::cout << "Address of brain: " << &brain << std::endl; 					//&brain gives the address of the variable brain
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;		//stringPTR holds the address of brain
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;		//&stringREF gives the address of the variable brain

	std::cout << "Value of brain: " << brain << std::endl;						//prints the value of brain
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;	// *stringPTR dereferences the pointer to get the value of brain
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;	//stringREF is a reference to brain, so it gives the value of brain

	// //Change the value via pointer
	// *stringPTR = "BRAIN CHANGED VIA POINTER";
	// std::cout << "\nAfter changing the value via pointer:\n" << std::endl;

	// std::cout << "Address of brain: " << &brain << std::endl;
	// std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	// std::cout << "Address held by stringREF: " << &stringREF << std::endl;

	// std::cout << "Value of brain: " << brain << std::endl;
	// std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	// std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	// //Change the value via reference
	// stringREF = "BRAIN CHANGED VIA REFERENCE";
	// std::cout << "\nAfter changing the value via reference:\n" << std::endl;

	// std::cout << "Address of brain: " << &brain << std::endl;
	// std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	// std::cout << "Address held by stringREF: " << &stringREF << std::endl;

	// std::cout << "Value of brain: " << brain << std::endl;
	// std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	// std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}