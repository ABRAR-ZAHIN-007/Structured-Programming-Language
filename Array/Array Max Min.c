/*  5. Write a program in C to find the maximum and minimum element in an array.

Input :
Enter the number of elements for your array: 5
Enter the array elements:
100 2 300 1 2

Output:
The maximum element is 300.
The minimum element is 1.

*/

   
    #include<stdio.h>
    int main()
    {
    	int n, i, max, min;
        printf("Enter the number of elements for your array: ");
        scanf("%d", &n);
        
        int a[n];
        
        printf("Enter the array elements:\n");
        for(i=0; i<n; i++)
        {
        	scanf("%d", &a[i]);
        }
        
        max = a[0];
        min = a[0];
        
        for(i=1; i<n; i++)  
        {
        	if( max < a[i]) 
            	max = a[i];
                
            if( min > a[i])
            	min = a[i];    
        }
        printf("The maximum element is %d.\n", max);
        printf("The minimum element is %d.\n", min);
            
        return 0;
    }    
        
        
        /*
        //OR,
        
        printf("\nThe maximum element is ");
        for(i=1; i<n; i++)  
        {
        	if( max < a[i]) 
            	max = a[i];
        }
            printf("%d\n", max);
          
        printf("The minimum element is ");
        for(i=1; i<n; i++)
        {
        	if( min > a[i])
            	min = a[i];
        }
        	printf("%d\n", min);
    
        return 0;
    }    
    
    */