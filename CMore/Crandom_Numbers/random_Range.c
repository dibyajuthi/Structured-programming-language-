#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
   srand(time(NULL));

   int x=rand() % 100; 
   printf("Random number between 0 and 99: %d\n", x);
    return 0;
}

