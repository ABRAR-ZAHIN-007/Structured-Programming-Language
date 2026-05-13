/*
Function to determine if a number is even or odd.

Sample input
3
Sample output
odd

Sample input
8
Sample output
even

*/


#include<stdio.h>
void fun1(int n)
{
    if(n%2!=0)
        printf("odd\n");
    else
        printf("even\n");
}


int main()
{
    int num;
    printf("Enter your value: ");
    scanf("%d", &num);
    fun1(num);
}


