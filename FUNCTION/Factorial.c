/*
9. Function to calculate the factorial of a number.

Sample input
3
Sample output
6

Sample input
5
Sample output
120

*/


#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("%d\n", result);

    return 0;
}
