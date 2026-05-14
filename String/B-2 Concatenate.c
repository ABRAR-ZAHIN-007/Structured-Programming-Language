/*
2. Write a program in C to concatenate two strings without using any library function.
Sample Input
“My name ”
“is andy”
Sample Output
“My name is andy”

Sample Input
“123abc”
“*A*B”
Sample Output
“123abc*A*B”

*/

#include<stdio.h>
int main()
{
    char str1[30];
    char str2[30];
    gets(str1);
    gets(str2);

    int i=0,len=0,j=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j] = str2[j];
        j++;
    }
    printf("%s\n", str1);



}
