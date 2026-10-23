#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
};

int main(){
    struct student students[3]={
        {"Liam", 20},
        {"Anja", 22},
        {"Jenny", 21},
    };

    students[1].age=23;
    strcpy(students[0].name, "Lucas");

    printf("%s is %d years old\n", students[0].name, students[0].age);
    printf("%s is %d yaers old\n", students[1].name, students[1].age);

    return 0; 
}