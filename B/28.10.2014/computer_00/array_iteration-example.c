#include <stdio.h>

int main() {
	// init 1
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int multiplier = 0;
	
	scanf("%d", &multiplier);
	
	int num;
	for (num = 0; num < 9; ++num) {
		printf("%d ", arr[num]);
	}
	printf("\n");
	
	for (num = 0; num < 9; ++num) {
		printf("%d ", arr[num] * multiplier);
	}
	printf("\n");
	
	return 0;
}