/* 1. Write a program in C to store elements in an array and print it.

Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2

Output:
You entered the following array elements:
100 2 300 1 2

*/

   
    #include<stdio.h>
    int main()
    {
    	int n, i;
        printf("Enter the number of elements for your array: ");
        scanf("%d", &n);
        
        printf("Enter the array elements:\n");
        int a[n];
        for(i=0; i<n; i++)
        {
        	scanf("%d", &a[i]);
        }
        
        printf("You entered the following array elements: \n");
        for(i=0; i<n; i++)
        {
        	printf("%d ", a[i]);
        }    
        
        	    
    
        return 0;
    }    
    
    