#include <stdio.h>

int main() {
	int counter;
	int even;
	for(counter = 10, even = 0; counter <= 1000 && even < 10; counter+=2, even++) {
			printf("%d\n", counter);
	}
	
	return 0;
}