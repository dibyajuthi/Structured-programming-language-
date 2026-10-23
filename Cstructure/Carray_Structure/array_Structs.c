#include<stdio.h>
struct student{
    char name[20];
    int age;
};

int main(){
    struct student students[3]={
        {"Liam", 20},
        {"Anja", 22},
        {"Jenny", 21}

    };

    printf("%s is %d years old\n", students[0].name, students[0].age);

    return 0;

}