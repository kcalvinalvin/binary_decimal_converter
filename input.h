#ifndef INPUT
#define INPUT

#include <iostream>

std::string input() {

	std::cout << "Please input the number you would like to convert:";
	std::string input;
	std::cin >> input;
	return input;

}

#endif //ends when INPUT is defined
