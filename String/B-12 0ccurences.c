/*
12. Write a program in C to count occurrences of a word in a string.
Sample Input
“I liked the story about the sad giant”
“the”
Sample Output
2

Sample Input
“It is what it is”
“it”
Sample Output
1

*/

#include <stdio.h>

int main()
{
    char str[200], word[50], temp[50];
    int i = 0, j = 0, k = 0, count = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    while ((str[i]) != '\0')
    {
        i++;
    }

    printf("Enter the word to search:\n");
    i = 0;
    while ((word[i] = getchar()) != '\n')
    {
        i++;
    }
    word[i] = '\0';

    // Scan the string word by word
    i = 0;
    while (str[i] != '\0')
    {
        // Extract one word into temp[]
        j = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            temp[j] = str[i];
            j++;
            i++;
        }
        temp[j] = '\0';  // End current word

        // Compare temp[] with word[]
        k = 0;
        int match = 1;
        while (word[k] != '\0' || temp[k] != '\0')
            {
            if (word[k] != temp[k])
            {
                match = 0;
                break;
            }
            k++;
        }

        if (match == 1)
        {
            count++;
        }

        if (str[i] != '\0')
        {
            i++;  // Skip the space
        }
    }

    printf("Occurrences of \"%s\": %d\n", word, count);

    return 0;
}
