#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
   int SIZE = 9;
   int rows,cols;
   int defenders[SIZE][SIZE];
   srand(time(NULL));
   for(rows = 0; rows < SIZE; rows++)
   {
         for(cols = 0; cols < SIZE; cols++)
         {
            if(rows == SIZE / 2 && cols == SIZE / 2)
            {
               defenders[rows][cols] = 20;
            }
            else
            {
               defenders[rows][cols] = rand() % 9 + 1;
            }
            printf("%d ",defenders[rows][cols]);
         }
         printf("\n");
   }
   
   return 0;
}
