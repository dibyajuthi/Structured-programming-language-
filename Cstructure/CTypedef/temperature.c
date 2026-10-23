#include<stdio.h>

typedef float temperature;

int main(){
    temperature today =25.5;
    temperature tomorrow= 18.6;

    printf("Today is:%.1f C\n", today);
    printf("Tomorrow:%.1f C\n", tomorrow);

    return 0;
}