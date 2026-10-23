#include <stdio.h>

typedef int (*Operation)(int, int);

int add(int a, int b) {
  return a + b;
}

int multiply(int a, int b) {
  return a * b;
}

int main() {
  Operation op = add;
  printf("%d\n", op(5, 3)); // 8

  op = multiply;
  printf("%d\n", op(5, 3)); // 15

  return 0;
}