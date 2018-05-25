#include <stdio.h>

int main()
{
  int a = 0;
  int b = 0;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (b != a)
  {
    printf("b is not equal to a");
  }
  if (a > b)
  {
    printf("a is greater than b");
  }   
  if (a >= b)
  {
    printf("a is greater than or equal to b");
  }
  if (a == 0 && b == 0){
    printf("a is equal to 0 AND b is equal to 0");
  }
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 or b is equal to 0");
  }
  if (!(a == 0))
  {
    printf("a is NOT equal to 0");
  }
}
