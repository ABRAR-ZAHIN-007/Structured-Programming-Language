/*
Q.10
Write a C program that defines a function to find the sum of elements in an array using a pointer.
Take an array of integers as input from the user. Calculate the sum of elements in the subarray
starting from index 2 to index 5 using the function. Print the sum.
Example:
Input: 1 2 3 4 5 6 7
Output: Sum of subarray: 18

*/


#include <stdio.h>
int sumSubarray(int *ptr, int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += *(ptr + i);
    }
    return sum;
}

int main()
{
    int arr[7];
    int i;

    printf("Enter 7 integers: ");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sumSubarray(arr, 2, 5);


    printf("Sum of subarray: %d\n", result);

    return 0;
}
