#include<stdio.h>
int main()
{
    int numbers[]={25,50,75,100};
    int length= sizeof(numbers)/sizeof(numbers[0]);

    for(int i=0; i<length; i++){
        printf("%d\n", numbers[i]);
    }

    return 0;
}