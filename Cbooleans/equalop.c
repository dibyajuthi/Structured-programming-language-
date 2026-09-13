#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("%d", 10==10); // Prints 1(true)
    printf("%d", 10==15); // Prints 0(false)
    printf("%d", 5==55); // Prints 0(false)

    return 0;
}