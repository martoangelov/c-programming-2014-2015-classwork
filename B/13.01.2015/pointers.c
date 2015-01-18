#include <stdio.h>

int print_int_array(int *arr, int length) {
	int i;
	for(i = 0; i < length; i++) {
		// pointer arithmetic:
		// if arr is a pointer to and int, assuming sizeof(int) == 4, and arr is referencing the address 0x7fffabc0
		// 'arr + 1' would be a pointer of type 'int*' referencing the address 0x7fffabc4
		printf("%d ", *(i + arr)); // *(pointer + number) is the same as pointer[number], hence number[pointer] aswell
	}
	printf("\n");

	return length;
}

int main() {

	int variable = 42;
	int *variable_pointer = &variable;
	// int *variable is a pointer to a variable of type int
	// &variable returns the address of variable in the memory
	
	
	// printf("variable: %d\n", variable);
	// // *variable_pointer = 5;
	// printf("variable_ptr_value: %d\n", *variable_pointer);
	// printf("variable_ptr: %p\n", variable_pointer);
	// printf("variable_addr: %p\n", &variable);
	// printf("variable_ptr_addr %p\n", &variable_pointer);


	int arr[5] = {1, 2, 3, 4, 5};

	print_int_array(arr, 5); // the name of the array is a constant pointer to the BEGINNING of the array




	return 0;
}
