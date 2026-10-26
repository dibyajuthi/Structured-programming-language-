#include<stdio.h>

extern int shared;

int main(){
    printf("Shared=%d\n", shared);
    return 0;
}