#include <stdio.h>

#define MATRIX_SIZE 9
int main()
{
	int field[MATRIX_SIZE][MATRIX_SIZE];
	srand(time(NULL));

	int i;
	int j;
	for (i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			field[i][j] = rand() % 9 + 1;
		}
	}
	field[MATRIX_SIZE/2][MATRIX_SIZE/2] = 20;
	for (i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			printf("%d ", field[i][j]);
		}
		printf("\n");
	}
	return 0;
}