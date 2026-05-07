/* 1.WAP that will print a pattern based on the input integer n. Please
see the sample input output.
Sample input Sample output
4            A B C D
             A B C
             A B
             A
			 
*/

#include <stdio.h>

int main() 
{
    int row, col, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }
    
    
    return 0;
}