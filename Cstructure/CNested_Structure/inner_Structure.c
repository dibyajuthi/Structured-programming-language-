#include<stdio.h>
struct Owner {
    char firstName[30];
    char lastName[30];
};

struct Car{
    char brand[30];
    int year;
    struct Owner Owner;
};

int main(){
    struct Car car1={"Toyota", 2010, {"John","Doe"}};
    printf("Car:%s(%d)\n", car1.brand, car1.year);
    printf("Owner: %s %s\n", car1.Owner.firstName, car1.Owner.lastName);

    return 0;
}