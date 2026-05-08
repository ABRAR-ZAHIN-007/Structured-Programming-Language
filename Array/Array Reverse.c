/*  4. Write a program in C that will reverse an array..

Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2

Output:
Your array after reversing:
2 1 300 2 100

*/

   
    #include<stdio.h>
    int main()
    {
    	int n, i, sum=0, temp, remainder;
        printf("Enter the number of elements for your array: ");
        scanf("%d", &n);
        
        int array[n];
        
        printf("Enter the array elements:\n");
        for(i=0; i<n; i++)
        {
        	scanf("%d", &array[i]);
        }
        
        printf("\nYour array after reversing: \n");
        for(i=n-1; i>=0; i--)   // Initializing Last value into First value
        						// Array তে index 0 থেকে শুরু হয় তাই শেষ মান n এর সমান হয়না, n-1 এর সমান হয়। 
        {
        	printf("%d ", array[i]);
        }    
        
        	    
    
        return 0;
    }    
    
    