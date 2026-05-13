/*
10. Function to take two positive numbers x and y as input and calculate x to the power y.

Sample input
3 4
Sample output
3 to the power 4 is 81

Sample input
10 3
Sample output
10 to the power 3 is 1000

*/

#include <stdio.h>

int power(int x, int y)
{
    int result = 1;

    for (int i=1; i<=y; i++)
    {
        result *= x;
    }
    return result;
}

int main()
{
    int x, y;

    printf("Enter base and exponent (x,y): ");
    scanf("%d %d", &x, &y);

    int result = power(x, y);
    printf("%d to the power %d is %d\n", x, y, result);

    return 0;
}
