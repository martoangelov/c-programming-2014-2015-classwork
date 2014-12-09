#include<stdio.h>
#include<time.h>
#include<stdlib.h>

	int main() {
	
			int random = 0;
				
				for(;;){
				random = rand() % 9 + 1;
				printf("%d\n", random);}
	
	
	
	return 0;
	}
