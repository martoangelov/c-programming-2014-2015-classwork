#include <stdio.h>

int main() {
	
	char hello[] = "Hello World!";
	// char hello[] = {'H', 'e', 'l', 'l', 'o', '\0'}
	
	int index;
	for (index = 0; index < 12; ++index) {
		printf("%d\n", hello[index]);
	}
	
	printf("\n\n\n");
	
	// check for int arr
	int arr[] = {1,2,3,4,5,6,7,8,9};
	
	// last index of arr = 8!!!
	for (index = 0; index < 11; ++index) {
		printf("%d\n", arr[index]);
	}
	
	return 0;
}