/*
15. Function that finds and returns the minimum value in an array.
Sample input
157 -28 -37 26 10
Sample output
Minimum Value: -37

Sample input
12 45 1 10 5 3 22
Sample output
Minimum Value: 1

*/

#include <stdio.h>

int find_minimum(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int minimum = find_minimum(numbers, n);

    printf("Minimum Value: %d\n", minimum);

    return 0;
}

