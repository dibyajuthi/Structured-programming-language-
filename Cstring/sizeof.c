#include <stdio.h>
int main()
{
    char car[] = "Volvo";
    int length = sizeof(car) / sizeof(car[0]), i;

    for (i = 0; i < length; i++)
    {
        printf("%c\n", car[i]);
    }

    return 0;
}