#include<stdio.h>

struct Student {
    char name[20];
    int grade;
};

int main(){
    struct Student Students[4]={
        {"Liam", 78},
        {"Anja", 92},
        {"Jenny", 85},
        {"Olivia", 88}
    };

    int best=0;
    int i;

    for(i=1; i<4; i++){
        if(Students[i].grade>Students[best].grade){
            best =i;
        }
        
    }

    printf("Top Student:%s (%d)\n", Students[best].name, Students[best].grade);

    return 0;

} 