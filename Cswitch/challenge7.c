#include <stdio.h>
int main() 
{
  int choice = 1;
    
    switch (choice) {
    case 1:
      printf("You ordered Coffee");
      break;

    case 2:
      printf("You ordered Tea");
      break;

    default:
      printf("Invalid choice");
  }

  return 0;
}
