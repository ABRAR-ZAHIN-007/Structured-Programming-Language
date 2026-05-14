/*
14. Write a program in C to find the maximum occurring character in a string.
Sample Input
“Welcome to CSE”
 Sample Output
 E (or e)

 Sample Input
“mmmttssarrrddd”
 Sample Output
 D (or d)

 Sample Input
“mmmttssarrrDDd”
 Sample Output
 D (or d)

*/
#include <stdio.h>

int main()
{
    char str[1000];
    int freq[26] = {0};  // to store frequencies of A-Z/a-z
    int i = 0, max = 0, index = 0;
    int ch;

    printf("Enter a string: ");
    gets(str);

    while( (ch=str[i]) != '\0')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
        }
        i++;
    }

    for(i = 0; i < 26; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            index = i;
        }
    }

    // Print result in uppercase
    printf("Maximum occurring character: %c\n", index + 'A');

    return 0;
}

