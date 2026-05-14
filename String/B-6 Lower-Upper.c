/*
6. Write a program in C to convert lowercase string to uppercase.
Sample Input
“My name is andy”
Sample Output“MY NAME IS ANDY”

Sample Input
“& I am 20 years old”
Sample Output
“& I AM 20 YEARS OLD”

*/

#include<stdio.h>
int main()
{
    char str[50];
    gets(str);

    int i,ch;

    while( (ch=str[i])!='\0' )
    {
        if( ch>='a' && ch<='z')
            str[i] = str[i] - 32;
            i++;
    }
    printf("Upper: %s\n", str);
}
