#include <stdio.h>

void swap(int *a, int *b);

int main() {

	int a = 5, b = 4;
	printf("a = %d; b = %d\n", a, b);

	swap(&a, &b);
	printf("a = %d; b = %d\n", a, b);

	return 0;
}


void swap(int *a, int *b) {
	printf("%d %d\n", a, b);
	int c = *a;
	*a = *b;
	*b = c;
}









