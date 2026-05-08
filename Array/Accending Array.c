/* 3. Write a program that will take an array of n integers from the user as input. Then it will sort the array in ascending
order. Note that you need to use nested loops in order to solve this problem.
*/

#include<stdio.h>
int main()
{
 int i, j, temp, n;
 printf("Enter number of array: ");
 scanf("%d", &n);
 
 int a[n];
 printf("Enter Array elements: ");
 for(i=0; i<n; i++)
 {
     scanf("%d", &a[i]);
 }
 for(i=0; i<n; i++)
 {
     for(j=i+1; j<n; j++)
     {
         if(a[i] > a[j])
         {
             temp = a[i];
             a[i] = a[j];
             a[j] = temp;
         }
     }
 }
 printf("Array Elements: ");
 for(i=0; i<n; i++)
 {
     printf("%d ", a[i]);
 }
 
 return 0;
}    
    
