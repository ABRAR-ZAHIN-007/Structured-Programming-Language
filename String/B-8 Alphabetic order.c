/*
8. Write a program in C to sort a string array in alphabetic order.
Sample Input
“My name is Andy”
Sample Output
“ AMadeimnnsyy”

Sample Input
“Abc 123 7&*&*”
Sample Output
“ &&**1237Abc"

*/

#include <stdio.h>

int main()
{
    printf("Enter a string: \n");
    char str[30];
    fgets(str, sizeof(str), stdin);

    char temp;
    int i = 0, j;

    while ((str[i])!= '\n')
    {
        i++;
    }
    str[i] = '\0';  // End the string

    int len = i;

    // Bubble sort without using string library
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                // Swap characters
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: \"");
    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    printf("\"\n");

    return 0;
}
