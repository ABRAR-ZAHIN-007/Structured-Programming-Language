/*  2.Write a program in C to copy the elements of one array into another array.

Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2

Output:
The elements in array 2 are as follows:
100 2 300 1 2

*/

   
    #include<stdio.h>
    int main()
    {
    	int n, i;
        printf("Enter the number of elements for your array: ");
        scanf("%d", &n);
        
        int array1[n], array2[n];
        
        printf("Enter the array elements:\n");
        for(i=0; i<n; i++)
        {
        	scanf("%d", &array1[i]);
        }
        
        
        for(i=0; i<n; i++)
        {
        	array2[i] = array1[i];
        }
        printf("\nThe elements in array 2 are as follows: \n");
        for(i=0; i<n; i++)
        {
        	printf("%d ", array2[i]);
        }    
        
        	    
    
        return 0;
    }    
    
    