#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){	
	int mapLength,i;
	
	scanf("%d",&mapLength);
	
	int gameMap[mapLength][mapLength];
	
	srand(time(NULL));
	
	for(i = 0; i < mapLength; i++){
		gameMap[0][i] = rand() % 9 + 1;
	}
	for(i = 1; i < (mapLength - 1)){
	
	}
		
	

	return 0;
}
//5 8 9 4 3
//9       4
//6       7
//4       9
//8 7 2 3 5
