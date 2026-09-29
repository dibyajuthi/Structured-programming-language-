#include<stdio.h>
int main()
{
    int numbers[45]={25,50,75,100};
    int i;

    for(i=0;i<4;i++)
    {
        printf("%p\n", &numbers[i]);
    }

    return 0;
}