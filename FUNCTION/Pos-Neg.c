/*
4. Function to determine if a number is positive, negative or zero.

Sample input
3
Sample output
positive

Sample input
-5
Sample output
negative

Sample input
0
Sample output
zero

*/



#include <stdio.h>
void check_number(int num)
{
    if (num > 0) {
        printf("positive\n");
    } else if (num < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    check_number(number);

    return 0;
}











