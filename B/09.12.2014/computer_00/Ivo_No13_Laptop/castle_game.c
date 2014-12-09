#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL) % 9 +1);
	int field[100];
	int field_size, cntr, cntr_1;
	int kingX, kingY
	printf("Enter field size(odd number no more than nine):");
	scanf("%d", &field_size);
	for(cntr = 0; cntr < field_size*field_size; cntr += field_size)
	{
		for(cntr_1 = 0; cntr_1 < field_size; cntr++)
		{
			field[cntr_1] = rand();
			if()  
		}
	}
	return 0;
} 