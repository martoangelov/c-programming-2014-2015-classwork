#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int rndm = 0;
	srand(time(NULL));
	rndm = rand();
	printf("%d\n", rndm);
	return 0;
}
















