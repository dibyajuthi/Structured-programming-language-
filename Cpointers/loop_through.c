#include<stdio.h>
int main()
{
    int numbers[4]={25,50,75,100};
    int *ptr=numbers;
    int i;

    for(i=0;i<4;i++)
    {
        printf("%d\n", *(ptr+i));
    }

    return 0;
}