#include<stdio.h>

int myFunction(int x, int y) {
    return x+y;
}

int main()
{
    printf("Result i:%d", myFunction(5,3));
    return 0;
}