/*
Q.9
Write a C program that declares an array of integers. Use a pointer to find and print all the prime
numbers in the array.
Example:
Input: 1 2 3 4 5 6 7 8 9 10
Output: Prime Numbers: 2 3 5 7

*/


#include <stdio.h>
int isPrime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        return 0;
    }
    return 1;
}

int main()
{
    int arr[10];
    int *ptr = arr;
    int i;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Prime Numbers: ");
    for (i = 0; i < 10; i++)
    {
        if (isPrime(*(ptr + i)))
        {
            printf("%d ", *(ptr + i));
        }
    }

    printf("\n");
    return 0;
}
