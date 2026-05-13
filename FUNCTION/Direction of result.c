/*
6. Function to calculate the sum of n numbers coming from the console.
Sample input
80 33 27
Sample output
Sum In Function: 140
Sum In Main: 140

Sample input
100 -100
Sample output
Sum In Function: 0
Sum In Main: 0
*/

#include <stdio.h>

int calculate_sum(int n)
{
    int sum = 0, value;

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        sum += value;
    }

    printf("Sum In Function: %d\n", sum);
    return sum;
}

int main()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    int total = calculate_sum(n);

    printf("Sum In Main: %d\n", total);

    return 0;
}
