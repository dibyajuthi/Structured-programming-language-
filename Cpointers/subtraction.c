#include<stdio.h>
int main()
{
    int numbers[5]={10,20,30,40,50};
    int *start= &numbers[1];
    int *end= &numbers[4];

    printf("%ld\n", end-start);

    return 0;
}