/*
1. Write a program in C to find the length of a string without using any library function.
Sample Input
“My name is andy”
Sample Output
15

Sample Input
“Abc 123 7&*&*”
Sample Output
13

*/

#include<stdio.h>
int main()
{
  char str[100];
  gets(str);

  int i=0;
  int length=0;
  while(str[i]!='\0')
  {
      i++;
      length++;
  }
  printf("%d", length);

}
