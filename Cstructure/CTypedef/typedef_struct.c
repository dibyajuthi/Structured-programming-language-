#include<stdio.h>
struct Car{
    char brand[30];
    int year;
};

typedef struct {
    char brand[30];
    int year;
} Car;

int main(){
    struct Car Car1={"BMW", 1999};
    
    Car Car2={"Ford",1969};
    
    printf("%s %d\n", Car1.brand, Car1.year);
    printf("%s %d\n", Car2.brand, Car2.year);
    return 0;
}