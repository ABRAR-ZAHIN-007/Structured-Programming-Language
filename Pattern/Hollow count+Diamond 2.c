/* 1.WAP that will print a pattern based on the input integer n. Please
see the sample input output.
Sample input Sample output

7 	     2_______0
		   33______11
           444_____222
           5555____3333
           66666___44444
           777777__555555
           8888888_6666666
           
             
*/

#include <stdio.h>

int main() 
{
    int row, col, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
        	printf("%d", row+1);
        }
        
        for(col=1; col<= n-row+1; col++)
    		{
        		printf("_");
    		}
    		for(col=1; col<=row; col++)
    		{
        		printf("%d", row-1);
        	}    
       	 printf("\n");
    }
    
    
            
    
    return 0;
}