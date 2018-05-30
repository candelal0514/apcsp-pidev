#include <stdio.h>
#include <string.h>

void compareStrings(char string1[26],char string2[26]){
  printf("str01: %s\n",string1);
  printf("str02: %s\n",string2);
  if ( strcmp( string1, string2) == 0)
  {
     printf("These strings are the same\n");
  }
  else
  {
     printf("These strings are different\n");
  }
}

int main(){

  char str01[26];
  char str03[26];
  char c = 'a';

  for (int i = 0; i < 27; i++)
  {
    str01[i] = c;
    c++;
  }
  str01[26]='\0';

  char str02[] = "abcdefghijklmnopqrstuvwxyz";

  compareStrings(str01,str02);

  for (int i = 0; i<26; i++)
  {
    str01[i] -= 32;
  }

  printf("The new string list is %s\n",str01);
  compareStrings(str01,str02);

  strcpy(str03, str01);

  strcat(str03,str02);
  printf("Final string is: %s",str03);
}
