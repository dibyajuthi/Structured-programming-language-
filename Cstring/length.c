#include<stdio.h>
#include<string.h>
int main()
{
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));
    printf("%zu\n", sizeof(alphabet));

    return 0;
}