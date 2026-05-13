/*
1 Write a C program using the following functions and a main function :
1. float squareRoot(int n): This function takes an integer n as input and returns its square root.
2. float divide(float x, float y): This function takes two numbers a and b as input and returns a/b.
3. float series_summer(int n): This function calculates the sum of the following series from the 1st term to the
nth term. It will take n as input and return the sum. This function must make use of the above two functions.

    1/root1 + 2/root2 + 3/root3 +...+ n/rootn

In the main() function, prompt the user to enter the nth term and then using the above functions, calculate the sum
of the series. Finally print the sum.
*/





#include <stdio.h>
#include <math.h>

float squareRoot(int n){
    return sqrt(n);
}
float divide(float x, float y){
    return x / y;
}
float series_summer(int n)
{
    float sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sum += divide(i, squareRoot(i));
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the nth term: ");
    scanf("%d", &n);

    float result = series_summer(n);

    printf("Sum of series: %f\n", result);

    return 0;
}






