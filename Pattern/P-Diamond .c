/* 1. Your task is to write a C code that takes the number of rows in the upper triangle of a diamond
as input and prints the diamond using nested loop.
Sample Input: Number of upper rows: 5
Expected Output:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * * 
    * * * * * 
      * * *
        *

*/

#include<stdio.h>
int main()
{
    int num, row, col;
    
    printf("Number of upper rows : ");
    scanf("%d", &num);
    printf("\n");
    
    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num-row; col++)
        { printf(" "); }
         
        for(col=1; col<=2*row-1; col++)
        { printf("*"); }
         printf("\n");
    }
    
    for(row=num-1; row>=1; row--)
    {
        for(col=1; col<=num-row; col++)
        { printf(" "); }
         
        for(col=1; col<=2*row-1; col++)
        { printf("*"); }
         printf("\n");
         
    }
    

    return 0;
}
    