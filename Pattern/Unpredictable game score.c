
/* Problem 2: Unpredictable Game Score
A game has a scoring system based on three inputs:
 •A (points from kills) 
 •B (points from assists) 
 •C (points from objectives) 
The final score is calculated as:
 •If A > B and A > C, double A. 
 •If B > A and B > C, double B. 
 •If C > A and C > B, double C. 
 •If two or more are equal, sum them up. 
 •If all are equal, triple the sum. 
 
Write a program that takes A, B, and C as input and calculates the final score.

Sample Input:
Enter points from kills (A): 10
Enter points from assists (B): 5
Enter points from objectives (C): 8

Expected Output:
Final Score: 20 (double A)

Sample Input:
Enter points from kills (A): 4
Enter points from assists (B): 4
Enter points from objectives (C): 4

Expected Output:
Final Score: 36 (triple the sum)

Sample Input:
Enter points from kills (A): 4
Enter points from assists (B): 4
Enter points from objectives (C): 8

Expected Output:
Final Score: 16 (double C)

Sample Input:
Enter points from kills (A): 3
Enter points from assists (B): 4
Enter points from objectives (C): 4

Expected Output:
Final Score: 11 (A+B+C)

*/


#include <stdio.h>

int main() 
{
    int A, B, C;
    printf("Enter points from kills (A): \n");
    scanf("%d", &A);
    printf("Enter points from assists (B): \n");
    scanf("%d", &B);
    printf("Enter points from objectives (C): \n");
    scanf("%d", &C);
    
    
    if(A==B && B==C)
    {
        printf("Final Score: %d (triple the sum)\n", (A+B+C)*3);
    }
    else if(A==B || A==C || B==C)
    {
        printf("Final Score: %d (A+B+C)\n", A+B+C);
    }
    else if(A>B && A>C)
    {
        printf("Final Score: %d (double A)\n", 2*A);
    }
    else if(B>C && B>A)
    {
        printf("Final Score: %d (double B)\n", 2*B);
    }
    else if(C>A && C>B)
    {
        printf("Final Score: %d (double C)\n", 2*C);
    }
       
    

    return 0;
    
}