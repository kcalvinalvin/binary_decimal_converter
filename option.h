#ifndef OPTION
#define OPTION

#include <iostream>

long long is_binary() {

	std::cout << "For decimal to binary, enter 1.\nFor binary to decimal, enter 2.\n:";
	long long option;
	std::cin >> option;
		
	while (option != 2 && option != 1) {
		std::cout << "For decimal to binary, enter 1.\nFor binary to decimal, enter 2.\n:";
		std::cin >> option;
	}
	return option;
}

long long is_signed() {
	std::cout << "For signed binary, enter 1.\nFor unsigned, enter 2.\n:";
	long long sign;
	std::cin >> sign;
	
	while (sign != 1 && sign != 2) {
		std::cout << "For signed binary, enter 1.\nFor unsigned, enter 2.\n:";
		std::cin >> sign;
	}
	return sign;
}

#endif //ends when OPTION is defined 
