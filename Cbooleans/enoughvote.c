#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age=25;
    int votingage=18;

    if(age>=votingage){
        printf("Old enough to vote!");
    }

    else{
        printf("Not old enough to vote");
    }
    
    
    return 0;
}