/*
Q.5 a) Write a C program that does the following:
 Declare an integer array A with arraysize 20, a pointer variable aPtr and assign array A to aPtr.
 Scan the elements of the array A using the pointer aPtr with offset.
 Write a function swap(int *a, int *b) to swap any 2 values from array A[ ] using pointers. Call
swap() function from the main() to swap array elements A[5] and A[11].

*/

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int A[20];
    int *aPtr = A;

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", aPtr + i);
    }

    swap( &A[5], &A[11] );

    printf("\nArray after swapping A[5] and A[11]:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
