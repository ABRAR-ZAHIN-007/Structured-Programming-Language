/*
17. Function to sort and return an input array in ascending order.
Sample input
10 22 -5 117 0
Sample output
-5 0 10 22 117

*/

#include <stdio.h>

void sort_array(int arr[], int n)
{
    int temp;
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

    sort_array(numbers, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
