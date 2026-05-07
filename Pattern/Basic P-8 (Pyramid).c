/* 1.WAP that will print a pattern based on the input integer n. Please
see the sample input output.
Sample input Sample output
4 	              1
			    2 2 2
              3 3 3 3 3 
  		   .4 4 4 4 4 4 4
             
*/

#include <stdio.h>

int main() 
{
    int row, col, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(row=1; row<=n; row++)
    {
    	for(col=1; col<=n-row; col++)
        {
        	printf(" ");
        }
        for(col=1; col<= 2*row-1; col++)
        {
        	printf("%d", row);
        }
        printf("\n");
    }
    
    
    return 0;
}
