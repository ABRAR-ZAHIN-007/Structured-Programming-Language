/* 1.WAP that will print a summation of series based on the input integer n. Please
see the sample input output.
Sample input Sample output
10           1+2+3+...+ 10 = 1055
			 
*/

#include <stdio.h>

int main() 
{
    int n, sum=0, a=1;
    
    printf("1+2+3+...+");
    scanf("%d", &n);
    printf("=%d",n);

    while(a<=n)
    {
        sum = sum + a;
        a = a + 1;
    }
    printf("%d", sum);

    return 0;
}