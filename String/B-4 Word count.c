/*
4. Write a program in C to count the number of words in a string.
Sample Input
“My name is andy”
Sample Output
4

Sample Input
123 7&*&*”
Sample Output
3


*/


#include<stdio.h>
int main()
{
    char str[30];
    gets(str);

    int i,word,ch;
    i=word=0;

    while( (ch=str[i])!='\0')
    {
        if(ch== ' ')
            word++;
        i++;
    }
    word++;

    printf("words: %d\n", word);
}
