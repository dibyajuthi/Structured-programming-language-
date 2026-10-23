#include<stdio.h>
struct person {
    int age;
};

int main(){
    struct person p;
    p.age =25;
    printf("%d", p.age);

    return 0;
}