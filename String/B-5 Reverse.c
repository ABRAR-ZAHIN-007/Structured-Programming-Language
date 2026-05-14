/*
5. Write a program in C to find the reverse of a string. **
Sample Input
“My name is Andy”
Sample Output
“ydnA si eman yM”

Sample Input
“Abc 123 7&*&*”
Sample Output
“*&*&7 321 cbA”

*/

#include<stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    gets(str1);

    int i=0, len=0, j=0;

    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=len-1,j=0; i>=0; i--, j++)  //for (initialization; condition; update)

    {
        str2[j] = str1[i];

    }
    str2[j] = '\0';

    printf("%s\n", str2);

}
