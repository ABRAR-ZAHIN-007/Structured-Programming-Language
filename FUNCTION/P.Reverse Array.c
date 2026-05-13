/*
Q.6
Write a C program that defines a function to reverse an array using pointers. Take an array of 5
integers from the user, reverse it using the function, and print the reversed array.
Example:
Input: 1 2 3 4 5
Output: Reversed Array: 5 4 3 2 1

*/


#include <stdio.h>
void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[5];
    int i;
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, 5);

    printf("Reversed Array: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
