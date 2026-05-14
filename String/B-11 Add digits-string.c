/*
11. Write a program in C to add the digits in a string.
Sample Input
“I am 20 years old”
Sample Output
2

Sample Input
“Abc 123 7&*&*”
Sample Output
13

*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, sum = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);

    while ( (str[i]) != '\0')
    {
        i++;
    }

    // Reset i to loop through the string
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum = sum + (str[i] - '0');  // Convert char to digit
        }
        i++;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
