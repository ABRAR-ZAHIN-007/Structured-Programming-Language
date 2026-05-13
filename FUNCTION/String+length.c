/*
11. Function to take a string as input and find its length.

Sample input
hello world
Sample output
11

Sample input
I love my country
Sample output
17

*/


#include <stdio.h>

int string_length(char str[]) {
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char input[100];

    printf("Enter a string: ");

    fgets(input, sizeof(input), stdin);

    int i=0;
    while (input[i] != '\0')
    {
        if(input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
        i++;
    }

    int len = string_length(input);
    printf("%d\n", len);

    return 0;
}
