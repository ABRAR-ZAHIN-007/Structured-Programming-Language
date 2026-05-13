/*
20. Function “GenNthPrime()” to compute the Nth prime number, where N is an integer input.

Sample input
5
Sample output
5th Prime: 11

Sample input
10
Sample output
10th Prime: 29

Sample input
40
Sample output
40th Prime: 173

*/

#include <stdio.h>

int IsPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i=2; i*i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}


int GenNthPrime(int N)
{
    int count = 0;
    int num = 2;

    while (1) {
        if (IsPrime(num))
        {
            count++;
            if (count == N)
            {
                return num;
            }
        }
        num++;
    }
}

int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    int nthPrime = GenNthPrime(N);
    printf("%dth Prime: %d\n", N, nthPrime);

    return 0;
}
