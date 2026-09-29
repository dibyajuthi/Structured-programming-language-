#include<stdio.h>
int main()
{
    int numbers[4]={25,50,75,100};
    *numbers=13;
    *(numbers+1)=17;

    printf("%d\n", *numbers);
    printf("%d\n", *(numbers+1));

    return 0;
}