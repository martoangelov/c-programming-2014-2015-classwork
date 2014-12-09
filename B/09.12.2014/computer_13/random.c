#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#DEFINE SIZE 9;

int main() {
	srand(time(NULL));
	int i, j, castle[SIZE][SIZE];
	
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			castle[i][j] = (rand() % 9) + 1;
		}
	{
	
	castle[SIZE/2][SIZE/2] = 20;
	
	int attacker_strength, attacker_point;
	char attacker_side;
	
	while (castle[SIZE/2][SIZE/2]>0) {
		do
			scanf("%c", attacker_side);
		while (attacker_size != T || attacker_size != B || 
		attacker_size != L || attacker_size != R ||);
		do
			scanf("%d", attacker_point);
		while (attacker_point > SIZE || attacker_point < 1);
		
		attacker_strength = (rand() % 3) + 1;
		
	}
	
	return 0;
}
