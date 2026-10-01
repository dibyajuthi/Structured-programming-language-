#include<stdio.h>
void greetMorning()
{
    printf("Good Morning!\n");
}
void greetEvening()
{
    printf("Good Evening!\n");
}

void greet(void(*func)())
{
    func();
}

int main()
{
    greet(greetMorning);
    greet(greetEvening);
    return 0;
}
