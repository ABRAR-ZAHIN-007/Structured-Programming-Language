/*
9. Write a program in C to count the occurrences of a character in a string regardless of its case.
Sample Input
“My name is Andy”
‘a’
Sample Output
2

Sample Input
“WELCOME to CSE, everyone”
‘E’
Sample Output
6

*/

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    while ( (ch=str[i])!= '\0' )
    {
        i++;
    }

    printf("Enter a character to count: ");
    ch = getchar();

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    i = 0;  // Reset index and count matches

    while (str[i] != '\0')
    {
        char currentChar = str[i];

        // Convert current character to lowercase manually
        if (currentChar >= 'A' && currentChar <= 'Z')
        {
            currentChar = currentChar + 32;
        }

        // Compare and count
        if (currentChar == ch)
        {
            count++;
        }

        i++;
    }

    printf("Occurrences of '%c': %d\n", ch, count);

    return 0;
}
