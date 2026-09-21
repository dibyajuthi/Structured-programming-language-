#include<stdio.h>
int main()
{
    int numbers[]={3,-1,7,0,9};
    int length= sizeof(numbers)/sizeof(numbers[0]);
    int i;

    for(i=0;i<length;i++){
        if(numbers[i]<0){
            continue;
        }
        if(numbers[i]==0){
            break;
        }

        printf("%d\n", numbers[i]);
    }

    return 0;
}