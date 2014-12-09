#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CASTLE_SIZE 9

void initialize_castle_grounds(int castle_grounds[CASTLE_SIZE][CASTLE_SIZE])
{
	int i;
	for (i = 0; i < CASTLE_SIZE; ++i)
	{
		int j;
		for (j = 0; j < CASTLE_SIZE; ++j)
		{
			castle_grounds[i][j] = rand() % 9 + 1;
		}
	}

	castle_grounds[CASTLE_SIZE / 2][CASTLE_SIZE / 2] = 20;
}

void print_castle_grounds(int castle_grounds[CASTLE_SIZE][CASTLE_SIZE])
{
	int i;
	for (i = 0; i < CASTLE_SIZE; ++i)
	{
		int j;
		for (j = 0; j < CASTLE_SIZE; ++j)
		{
			printf("%d ", castle_grounds[i][j]);
		}

		printf("\n");
	}
}

int main()
{
	int castle_grounds[CASTLE_SIZE][CASTLE_SIZE];
	srand(time(NULL));

	initialize_castle_grounds(castle_grounds);
	print_castle_grounds(castle_grounds);

	return 0;
}