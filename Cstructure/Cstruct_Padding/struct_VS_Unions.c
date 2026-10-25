#include<stdio.h>

struct S {
    char a;
    int b;
    char c;
};

union U {
    char a;
    int b;
    char c;
};

int main(){
    printf("Struct Size: %zu\n ", sizeof(struct S));
    printf("Union Size: %zu\n ", sizeof(union U));

    return 0;
}
