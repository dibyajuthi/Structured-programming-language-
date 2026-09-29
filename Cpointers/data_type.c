#include<stdio.h>
int main()
{
    int numbers[2]={1,2};
    char letters[]="Hi";
    int *pi=numbers;
    char *pc=letters;

    printf("%p\n", (void*)pi);
    printf("%p\n", (void*)(pi+1));
    printf("%p\n", (void*)(pi+2));

    printf("%p\n", (void*)pc);
    printf("%p\n", (void*)(pc+1));
    printf("%p\n", (void*)(pc+2));

    return 0;

}