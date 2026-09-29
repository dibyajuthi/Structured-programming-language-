#include<stdio.h>
int main()
{
    int num=5;
    int *ptr= &num;
    int **pptr= &ptr;

    **pptr=20;

    printf("Num=%d\n", num);

    return 0;
}