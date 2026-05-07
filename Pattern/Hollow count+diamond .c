/* 1.WAP that will print a pattern based on the input integer n. Please
see the sample input output.
Sample input Sample output

7 	       2_____________0
		   33___________11
           444_________222
           5555_______3333
           66666_____44444
           777777___555555
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

        for(col=1; col<= 2*(n-row)+1; col++)
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
