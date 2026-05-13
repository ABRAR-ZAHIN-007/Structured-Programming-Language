/*
16. Function that multiplies the array elements by 2 and returns the array.

Sample input
157 -28 -37 26 10
Sample output
314 -56 -74 52 20

Sample input
12 45 1 10 5 3 22
Sample output
24 90 2 20 10 6 44

*/

#include <stdio.h>

void multiply_by_two(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers:\n", n);

    for (int i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    multiply_by_two(numbers, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
