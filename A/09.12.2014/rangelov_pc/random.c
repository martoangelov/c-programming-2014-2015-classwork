#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int random_number = 0;
	int i;
	
	srand(time(NULL));
	for(i = 0; i<10; i++)
	{
		random_number = rand() % 9 + 1;
		printf("%d", random_number);
	}
	return 0;
}
