#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int temp;
  
  a = 2;
  c = a + b;
  printf("a = %d. c = %d.", a , c);
  printf("\nSum of %d and %d is %d\n", a, b, c);
  temp = a;
  a = c;
  c = temp;
  printf("a = %d. c = %d.", a , c);
}
