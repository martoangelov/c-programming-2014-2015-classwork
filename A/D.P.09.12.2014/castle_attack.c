#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int SIZE;
   int counter;
   srand(time(NULL));
   for(counter = 0; counter < 10; counter++)
   {
      SIZE = rand() % 9 + 1;
      printf("%d\n",SIZE);
   }
   return 0;
}
