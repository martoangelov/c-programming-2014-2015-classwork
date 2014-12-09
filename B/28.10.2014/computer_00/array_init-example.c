#include <stdio.h>

int main() {
	int size = 0;
	
	scanf("%d", &size);
	
	// int arr[] = {1,2,3,4,5,6,7,8,9,0,-1};
	int arr[size];
	int index;
	
	for (index = 0; index < size; ++index) {
		printf("%d\n", arr[index]);
	}
	
	return 0;
}