#include<stdio.h>
int main()
{
    int numbers[]={25, 50, 75, 100};
    numbers[0]=33;

    printf("%d\n", numbers[0]);
    return 0;
}