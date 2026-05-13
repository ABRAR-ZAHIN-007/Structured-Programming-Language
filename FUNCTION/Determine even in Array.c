/*
14. Function to determine only even numbers in an array of input integers.
Sample input
24 77 117 -512 1024
Sample output
24 -512 1024

Sample input
45 33 0 256
Sample output
0 256

*/

#include <stdio.h>

void print_even_or_zero(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
      /*  else
        {
            printf("0 ");
        }
      */
    }
    printf("\n");
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

    print_even_or_zero(numbers, n);

    return 0;
}
