#include <iostream> 
#include "input.h"
#include "option.h"
#include "convert.h"

/*  
	what the returned ints call:
	1 -> calls decimal to signed binary
	2 -> calls decimal to unsined binary
	3 -> calls signed binary to decimal
	4 -> calls unsigned binary to decimal
*/

long long interpret() {
	
	long long option = is_binary();
	long long sign = is_signed();
	//signed is 1 and unsigned is 2
	if (option == 1) {
		
		if (sign == 1) {
			return 1;
		}
		else if (sign ==2) {
			return 2;
		}
		else {
			std::cout << "Invalid input" << std::endl;
			return 0;
		}
	}
	//signed is 1 and unsiged is 2
	else if (option == 2) {
	
		if (sign == 1) {
			return 3;
		}
		else if (sign == 2) {
			return 4;
		}
		else {
			std::cout << "Invalid input" << std::endl;
			return 0;
		}
	}
	else {
		std::cout << "Invalid input" << std::endl;
		return 0;
	}
}

int main() {

	long long option = interpret();
	std::string number = input();
	convert(option, number);		
	return 0;

}
