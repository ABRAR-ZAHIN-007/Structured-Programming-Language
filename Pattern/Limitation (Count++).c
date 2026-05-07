/* 1.WAP that will print a pattern based on the input integer n. Please
see the sample input output.
Sample input Sample output

5 	             1 
				 2 3
               4 5 1 
             2 3 4 5
           1 2 3 4 5  
               
  
*/  
           
             


#include <stdio.h>

int main() 
{
    int row, col, n, count=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");
    
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
        	printf(" ");
        }
        for(col=1; col<=row; col++)
        {   
            printf("%d", count);
            
            count++;
            if(count > 5)
            	count = 1;
        }
        printf("\n");    
        
    }      
    
        	
    return 0;
}


