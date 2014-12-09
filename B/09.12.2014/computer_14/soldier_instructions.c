#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 9
int main()
{

	int castle[SIZE][SIZE];
	int counter, counter2;
	
	srand(time(NULL));
	
	for(counter = 0; counter < SIZE; counter++)
		for(counter2 = 0; counter2 < SIZE; counter2++)
			castle[counter][counter2] = rand() % 9 + 1;
			
	castle[SIZE/2 + 1][ SIZE/ 2 + 1] = 20;
	
	
	
	return 0;
}
