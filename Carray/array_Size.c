#include <stdio.h>

int main()
{
  int myNumbers[4];
  myNumbers[0] = 25;
  myNumbers[1] = 50;
  myNumbers[2] = 75;
  myNumbers[3] = 100;
	
  for(int i=0; i<=3; i++){
  	printf("%d\n", myNumbers[i]);}
 
  return 0;
}