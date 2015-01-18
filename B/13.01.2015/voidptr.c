#include <stdio.h>

int main() {

	float var = 42.0f;
	void *ptr = &var; // can be pointed to every type
	printf("%p\n", ptr);
	printf("%f\n", *(float*)ptr); // cannot be dereferenced without a cast!

	return 0;
}
