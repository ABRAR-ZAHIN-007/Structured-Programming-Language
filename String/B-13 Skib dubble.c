/*
13. Write a program in C to remove all repeated characters in a string.
Sample Input
“i like programming in C”
Sample Output
“i lkeprogamnC”

Sample Input
“My name is Andy”
Sample Output
“My nameisAd”

*/

#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i = 0, j, k, isRepeated;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    while ((str[i]) != '\0')
    {
        i++;
    }

    // Process to remove duplicates
    i = 0;
    k = 0;  // index for result[]
    while (str[i] != '\0')
    {
        isRepeated = 0;

        for (j = 0; j < k; j++)
        {
            if (str[i] == result[j])
            {
                isRepeated = 1;
                break;
            }
        }

        if (isRepeated == 0)
        {
            result[k] = str[i];
            k++;
        }
        i++;
    }
    result[k] = '\0';

    printf("After removing duplicates: %s\n", result);

    return 0;
}

