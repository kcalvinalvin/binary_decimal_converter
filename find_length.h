#ifndef LENGTH
#define LENGTH

long long find_length(long long number) {

	int len  = 1;
	
	if (number > 0) {
		//count how many times the number can be divided by 10
		//this shows how many times a number can be cut off
		for (len = 0; number > 0; len++) {
			number = number / 10;
		}
	}
	return len;
}

#endif //ends when LENGTH is defined
