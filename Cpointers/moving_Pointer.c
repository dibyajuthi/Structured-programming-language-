#include<stdio.h>
int main()
{
    int numbers[4]={25,50,75,100};
    int *p= numbers;

    for(int i=0;i<4;i++)
    {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}