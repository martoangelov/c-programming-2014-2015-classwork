#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int random_number = 0;
	int i,counter,my_castle[9][9];
	srand(time(NULL));
	for(i = 0; i < 9; i++)
	{
		for(counter = 0; counter < 9; counter++)
		{	
			if ((i == 4)&&(counter == 4))
			my_castle[i][counter] = 20;
			else
			{
 			my_castle[i][counter] = rand() % 9 + 1;
			}
			printf("%2.d  ", my_castle[i][counter]);
			
		}
		printf("\n");
	}	
	return 0;
}
