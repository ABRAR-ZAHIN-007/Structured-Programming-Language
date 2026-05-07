/* Problem 1: Alien Number System
In an alien number system, a number N follows these rules:
If N is divisible by 3, reverse its digits. 
If N is divisible by 5, replace all even digits with 0. 
If N is divisible by both 3 and 5, apply both rules in order. 
Otherwise, print the number as it is. 

Example:
Input: 135 → Output: 531 (Reversed because it’s divisible by 3) 
Input: 4010 → Output: 0010 (All even digits become 0) 
Input: 150 → Output: 051 (First reversed, then even digits changed)
Input: 30345 → Output: 50303 (First reversed, then even digits changed)
Input: 12345 → Output: 50301 (First reversed, then even digits changed)
Input: 79 → Output: 79 (No change)
*/


#include <stdio.h>

int main() 
{
    int r, sum=0, temp, n, output=0;
    printf("Enter a number: \n");
    scanf("%d", &n);
   
   
    if(n%3==0 && n%5==0)
    {
        temp = n;
        while(temp!=0)
        {
            r = temp % 10;
            sum = sum * 10 + r;
            temp = temp / 10;
        }
    
        temp = sum;
        int place=1;
   
        while(temp!=0)
        {
            r = temp % 10;
            if(r%2==0)
                r = 0;
            output = output + r * place;
            place = place * 10;
            temp = temp / 10;
        }
        printf("Output: %d\n", output);
    
    }
   
   
    else if(n%3==0)
   {
       temp = n;
    
       while(temp!=0)
       {
           r = temp % 10;
           sum = sum * 10 + r;
           temp = temp / 10;
       }
       printf("Output: %d\n",sum);
   } 
  
  
    else if(n%5==0)
   {
        temp = n;
        int place=1;
        while(temp!=0)
        {
            r = temp % 10;
            if(r%2==0)
                r = 0;
            output = output + r * place;
            place = place * 10;
            temp = temp / 10;
        }
        printf("Output: %d\n", output);
   }
    
    else 
   {
        printf("Output: No change.");
   }
    

    return 0;
    
}