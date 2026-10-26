#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));  // seed with current time

  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());
  return 0;
}