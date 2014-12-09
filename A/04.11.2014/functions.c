#include <stdio.h>

int is_even(int num) {
	return num % 2 == 0;
}

void draw_tree(int show_it) {
	if(!show_it) {
		return;
	}
	printf(" * \n");
	printf("***\n");
}

int main() {
	draw_tree(1);

	return 0;
}