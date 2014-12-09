#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE  9 
int main()
{
	int castle[SIZE][SIZE];
	int i,b;
	
	srand(time(NULL));
	
	
	for (i = 0; i < SIZE; i += 1)
	{
		for (b = 0; b < SIZE; b += 1)
		{
			castle[i][b] = rand() % 9 +1; 
			printf("%3d", castle[i][b]);
		}
		printf("\n");
	}
	
	return 0;
}
