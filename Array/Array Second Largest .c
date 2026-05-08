/* 5. Write a program that will take an array of n integers from the user as input. Then it will determine the second largest
element from the array.
*/

#include<stdio.h>
int main()
{
    int n, i, max1, max2;
    
    printf("Number of digits : ");
    scanf("%d", &n);
    printf("\n");
    
    int a[n];
    printf("Enter the elements: \n");
    
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    for(i=0; i<n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
           max2 = a[i];
        }
    
    }
    printf("Second largest element is %d", max2);

    return 0;
}
    