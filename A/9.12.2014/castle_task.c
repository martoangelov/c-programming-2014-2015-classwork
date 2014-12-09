#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

	int random_number;
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < 3; i++)
	{
	random_number = rand() % 9 + 1;
	printf("%d\n", random_number);
	}
	
		
	printf("%d\n", time(NULL));	
	

return 0;
}
