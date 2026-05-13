/*
5. Function that takes two numbers as input and determines if the first number is greater than,
equal to or less than the second number.

Sample input
5 4
Sample output
5 is greater than 4

Sample input
2 6
Sample output
2 is less than 6

Sample input
8 8
Sample output
8 is equal to 8


*/


#include <stdio.h>
void compare_numbers(int a, int b)
{
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b) {
        printf("%d is less than %d\n", a, b);
    }
    else {
        printf("%d is equal to %d\n", a, b);
    }
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    compare_numbers(num1, num2);

    return 0;
}
