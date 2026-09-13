#include <stdio.h>
int main()
{
    int person = 3;
    person++;
    person++;
    person++;

    printf("%d\n", person);

    person--;

    printf("%d\n", person);

    return 0;
}