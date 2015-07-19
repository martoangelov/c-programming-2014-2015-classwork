#include <stdio.h>

int main() {

	int var = 42;
	float pi = 3.141592653f;
	int *ptr = &var;
	void *vptr;

	printf("#ptr = %p\n", ptr);
	printf("##ptr = %p\n", &ptr);

	vptr = &var;

	printf("void ptr value: %ld\n", sizeof(vptr));

	printf("void ptr value: %d\n", *(int*)vptr);

	vptr = &pi;

	printf("void ptr value: %f\n", *(float*)vptr);

	double d = 234.876425297215623459974586;
	int f = (int) d;
	printf("%.25lf\n", d); 
	printf("%d\n", f); 




	return 0;
}