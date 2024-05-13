#include <stdio.h>
int main()
{
  int number = 44;
  int *Pnumber = &number;

  // displays output
  printf("pointer of x is : %p \n", Pnumber);
  int y = *Pnumber;
  printf("y is the value of the address in Pnumber: %d \n", y);
  number = 123;

  printf("y is the value of the address in Pnumber: %d \n", y);
  printf("x is the value : %d \n", number);

  return 0;
}