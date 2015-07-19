#include <stdio.h>

typedef struct color_t color;
typedef int byte;

struct color_t {
	byte r;
	byte g;
	byte b;
};

int main() {
	
	color ime_no_ptr = {128, 256, 64}, *ime;
	
	ime = &ime_no_ptr;
	
	// normal
	printf("R = %d, G = %d, B = %d\n", ime_no_ptr.r, ime_no_ptr.g, ime_no_ptr.b);
	
	// access from pointer
	printf("R = %d, G = %d, B = %d\n", ime->r, ime->g, ime->b);
	
	int inc = 0;
	for (; inc < 128; ++inc) {
		++ime->b;
		
		// ++(ime->b)
		// (++ime)->b
	}
	
	printf("R = %d, G = %d, B = %d\n", ime->r, ime->g, ime->b);
	
	return 0;
}