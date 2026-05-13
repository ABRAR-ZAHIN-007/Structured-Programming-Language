/*
13.Write a program in C to remove all repeated characters in a string.
Sample Input Sample Output
“i like programming in C” “i lkeprogamnC”
“My name is Andy” “My nameisAd”

*/


#include <stdio.h>

int main()
{
    char str[1000], result[1000];
    int i, j = 0, k;
    int found;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        found = 0;

        for (k = 0; k < j; k++)
        {
            if (str[i] == result[k])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("Output: %s\n", result);

    return 0;
}






/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 1000

int main()
{
    char str[SIZE], result[SIZE];
    bool seen[256] = { false };  // ASCII ক্যারেক্টার ট্র্যাক করার জন্য
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, SIZE, stdin);
    str[strcspn(str, "\n")] = '\0';  // newline সরিয়ে ফেলা

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (!seen[ch]) {
            seen[ch] = true;
            result[j++] = ch;
        }
    }

    result[j] = '\0';  // null-terminate the string

    printf("Output string without repeated characters: \"%s\"\n", result);

    return 0;
}
*/
