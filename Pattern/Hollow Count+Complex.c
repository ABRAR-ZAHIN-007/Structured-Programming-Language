/* 1.WAP that will print a pattern based on the input integer n. Please
see the sample input output.
Sample input Sample output

4 	         1_____1 
			   12___21
               123_321
               1234321
  
*/  
           
             


#include <stdio.h>

int main() 
{
    int row, col, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Your Diagram\n");
    printf("\n");
    
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
        	printf("%d", col);
        }
        for(col=1; col<=2*(n-row)-1; col++)
        {    
            printf("_");
        }
        
        if(row!=n)
        {
        	for(col=row; col>=1; col--)
        	{    
            	printf("%d", col);
        	}
        }
        else
        {
        	for(col=row-1; col>=1; col--)
        	{    
            	printf("%d", col);
        	}
        }        
        printf("\n");    
        
    }      
    
        	
    return 0;
}


