/*
Q.7
Write a C program that dynamically allocates memory for an array of 10 integers using pointers.
Take input for the array elements from the user, calculate the average of the elements, and print it.
Finally, free the allocated memory.
Example:
Input: 1 2 3 4 5 6 7 8 9 10
Output: Average: 5.5

*/


#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    int i, sum = 0;
    float average;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    average = sum / 10;

    printf("Average: %.1f\n", average);


    return 0;
}
