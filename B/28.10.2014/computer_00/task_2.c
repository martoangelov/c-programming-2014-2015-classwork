#include <stdio.h>

/**
 * Задача 2 - масив от числа, да се изведе сбора на числата намиращи се на четен/нечетен индекс
 */
int main() {
	
	int arr[] = {6, 5, 10, 18, 255, 1024, 768, -256, 42, 29};
	
	int sum;
	int index;
	
	// za chetnite, zapochvame ot 0, pak += 2 ili s IF
	for (index = 1; index < 10; index += 2) {
		sum += arr[index];
	}
	
	printf("SUM = %d\n", sum);
	
	return 0;
}