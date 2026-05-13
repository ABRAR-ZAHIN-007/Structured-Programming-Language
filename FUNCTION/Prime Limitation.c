/*
19. Function “GeneratePrime()” to compute the prime numbers less than N, where N is an input
integer. GeneratePrime() uses IsPrime() to check whether a number is prime or not.
Sample input
5
Sample output
Prime less than 5: 2, 3

Sample input
10
Sample output
Prime less than 10: 2, 3, 5, 7

Sample input
40
Sample output
Prime less than 17: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37

*/



#include <stdio.h>

int IsPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void GeneratePrime(int N)
{
    printf("Prime less than %d: ", N);
    for (int i=2; i<N; i++)
    {
        if (IsPrime(i))
        {
            printf("%d", i);
            if (i < N - 1)
            {
                // শেষ উপাদানের পরে কমা না দিতে চেক
                int found_next = 0;
                for (int j = i + 1; j < N; j++)
                {
                    if (IsPrime(j))
                    {
                        found_next = 1;
                        break;
                    }
                }
                if (found_next)
                printf(", ");
            }
        }
    }
    printf("\n");
}

int main()
{
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    GeneratePrime(N);

    return 0;
}

