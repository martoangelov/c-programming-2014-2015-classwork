#include <stdio.h>

int main() {
	int num, counter;
	
	for(num = 0, counter = 0; num <= 100; num++, counter++) {
		if (num % 2 == 0) {
			printf("%d is Even!\n", num);
		}
	}
	return 0;
}