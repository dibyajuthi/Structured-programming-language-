#include<stdio.h>
struct Student{
    char name[20];
    int age;
};

int main(){
    struct Student Students[3]={
        {"Liam",20},
        {"Anja",22},
        {"Jenny",21}
    };
    int i;
    for(i=0; i<3; i++)
    {
        printf("%s is %d years old\n", Students[i].name,Students[i].age);
    }

    return 0;
}

