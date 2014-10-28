#include <stdio.h>

/**
 * Задача 1 - масив от числа, да се намери сбора   * на четните/нечетни числа.
 */
int main() {
	// size = 10
	int arr[] = {6, 5, 10, 18, 255, 1024, 768, -256, 42, 29};
	
	int element;
	int sum;
	
	for (element = 0; element < 10; element++) {
		// za ne chetno arr[element] % 2 != 0
		if (arr[element] % 2 == 0) {
			if (element < 8)
				printf("%d + ", arr[element]);
			else 
				printf("%d\n", arr[element]);
			
			sum += arr[element];
			// ^ sum = sum + arr[element];
		}
	}
	
	printf("SUM = %d\n", sum);
	return 0;
}