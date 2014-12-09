#include <stdio.h>

int char2int(char);

int main() {
	
	printf("%d\n", char2int('9'));
	
	// printf return int ha-ha-ha
	printf("%d\n", printf("", char2int('8')));
	return 0;
}

int char2int(char digit) {
	
	if (digit >= '0' && digit <= '9') {
		return digit - '0';
	}
	
	return 0;
}