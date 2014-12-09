#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define CASTLE_MAX_SIZE 20

int get_random_defense() {
	int random_number = 0;
	int i ;
	srand(time(NULL));
	random_number = rand() % 9 + 1;
	return random_number;
	
}

int get_random_attack() {
	int random_number = 0;
	int i ;
	srand(time(NULL));
	random_number = rand() % 5 + 1;
	return random_number;
}

int main () {
int size;
int castle[][]
}
return 0 ;
}
