#include<stdio.h>
int main()
{
    int numbers[4]={25,50,75,100};
    
    
    printf("%d\n", *(numbers+1));
    printf("%d", *(numbers+2));
    
    return 0;
}