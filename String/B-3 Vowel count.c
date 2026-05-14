/*
3. Write a program in C to count how many vowels are there in a string.
Sample Input
“My name is andy”
Sample Output
4

Sample Input
“Are you READY yet?”
Sample Output
7

*/




#include<stdio.h>
int main()
{
    char str[50];
    gets(str);

    int i,vowel,ch;
    i=vowel=0;

    while( (ch=str[i])!='\0' )
    {
        if( (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ) || (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') )
            vowel++;
            i++;
    }
    printf("%d\n", vowel);
}
