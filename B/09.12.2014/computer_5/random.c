#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int i,random_number = 0;
	
	srand(time(NULL));
	for(i = 0;i <30; i++){
		random_number = rand() % 9 + 1;
	
		printf("%d\n", random_number);
	}
	return 0;
}
