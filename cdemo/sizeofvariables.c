#include <stdio.h>

int main(){
 int a = 1;
 char b = 1;
 double c = 1;
 float d = 1;

 printf("The size of an int is %d.\nThe size of a char is %d.",sizeof(a),sizeof(b));
 printf("\nThe size of a double is %d.\nThe size of a float is %d.",sizeof(c),sizeof(d));

}
