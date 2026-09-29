#include<stdio.h>
int main()
{
    int num=10;
    int *ptr=&num;
    int **pptr=&ptr;

    printf("Num=%d\n", num);
    printf("*ptr=%d\n", *ptr);
    printf("**pptr=%d\n", **pptr);

    return 0;
}