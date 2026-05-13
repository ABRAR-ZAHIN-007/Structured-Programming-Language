/*
7. Function to calculate the sum of n numbers coming from the console and stored in an array.
Sample input
3
80 33 27
Sample output
Sum In Function: 140
Sum In Main: 140

Sample input
2
100 -100
Sample output
Sum In Function: 0
Sum In Main: 0
*/


#include <stdio.h>
int calculate_sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum In Function: %d\n", sum);
    return sum;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int total = calculate_sum(numbers, n);
    printf("Sum In Main: %d\n", total);

    return 0;
}
