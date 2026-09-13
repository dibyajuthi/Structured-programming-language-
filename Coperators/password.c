#include<stdio.h>
int main()
{
    int passwordlength=5;
    printf("%d\n", passwordlength>=8);// 0(false), too short
    printf("%d\n", passwordlength<8); // 1(true), needs more characters

    return 0;
}