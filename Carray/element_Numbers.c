#include<stdio.h>
int main()
{
    double Values[] = {1.1, 2.2, 3.3};
    int length = sizeof(Values)/ sizeof(Values[0]);

printf("%d", length);  
}