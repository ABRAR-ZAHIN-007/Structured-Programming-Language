/* 4. Write a C program to print the following pattern. Take n as user input where n is odd and n>=5.
Sample Input - Sample Output
 5			    1
			    1 3
              1 3 5
            1 3 5 1
          1 3 5 1 3
*/

#include<stdio.h>
int main()
{
    int n, row, col, num;
    
    printf("Number of digits : ");
    scanf("%d", &n);
    printf("\n");
    
    
    if(n>5 || n%2==0) 
     {
      printf("Enter an odd  number >=5.\n");
      return 0;
     }
        
        
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        { printf(" "); }
         
        num = 1; 
        for(col=1; col<=row; col++)
        { 
            printf("%d", num);
            num +=2;
            if(num > 5)
                num = 1;
        }
         printf("\n");
    }
    

    return 0;
}
    