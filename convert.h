#ifndef CONVERT
#define CONVERT

#include <iostream>
#include <cmath>
#include <string>
#include "find_length.h"

void d2sb(std::string input) {
	
	long long number = std::stoll(input);

	//makes a string named sign and appends the correct sign
	std::string sign;
	if (number > 0) {
		sign.append("0");
	}
	
	else {
		sign.append("1");
	}

	//makes a string named answer and appends the correct int
	std::string answer;
	while(number != 0) {
		if (remainder(number, 2) == 0) {
			answer.append("0");
		}
		else {
			answer.append("1");
		}
		number = number / 2;
	}
	
	reverse(answer.begin(), answer.end());
	std::cout << sign << answer << std::endl;
}

void d2ub(std::string input) {

	long long number = std::stoll(input);

	std::string answer;

	while(number != 0) {
		if (remainder(number, 2) == 0) {
			answer.append("0"); 
		}
		else {
			answer.append("1");
		}
		number = number / 2;
	}
	reverse(answer.begin(), answer.end());
	std::cout << answer << std::endl;
}

void sb2d(std::string input) {

	char sign = input[0];
	
	if (sign == '1') {
		std::cout << "-";
	}
	
	else {	
	}
	
	input.erase(0, 1);
	//converts the input string to a long long
	long long number = std::stoll(input);

	long long length = find_length(number);
	long long answer = 0;
	
	//calculates the value of the binary number without the sign		
	for(; length > 0; length--) {
	
		long long digit = number / long(pow(10, length - 1));
		number = number % long(pow(10, length - 1));
		long long digit_value = digit * long(pow(2, length - 1));
		answer = answer + digit_value;
	}
	std::cout << answer << std::endl;
}

//TODO fix comments. Make it look prettier
void ub2d(std::string input) {

	long long number = std::stoll(input);

	long long length = find_length(number);
	long long answer = 0;
	for (; length > 0; length--) {
		
		//gets the digits
		long long digit = number / long(pow(10, length - 1));
		number = number % long(pow(10, length - 1));
		//std::cout << digit << std::endl;
		//std::cout << number << std::endl;
		long long digit_value = digit * long(pow(2,length - 1));
		//std::cout << digit_value << std::endl;
		answer = answer + digit_value;
		//std::cout << answer << std::endl;	
	}
	std::cout << answer << std::endl;
}

 /*
	what the returned ints call:
	1 -> calls decimal to signed binary
	2 -> calls decimal to unsined binary
 	3 -> calls signed binary to decimal
	4 -> calls unsigned binary to decimal
 */

void convert(long long option, std::string number) {

	if (option == 1) {
		d2sb(number);
	}
	
	else if (option == 2) {
		d2ub(number);
	}
	
	else if (option == 3) {
		sb2d(number);	
	}
	
	else if (option == 4) {
		ub2d(number);
	}
	
	else {
		std::cout << "Invalid input" << std::endl;
	}
}

#endif //ends when CONVERT is defined
