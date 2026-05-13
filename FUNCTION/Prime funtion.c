/*
18. Function “IsPrime()” to determine whether a number is prime or not.
Sample input
1
Sample output
Not prime

Sample inpu
2
Sample output
Prime

Sample inpu
11
Sample output
Prime

Sample inpu
39
Sample output
Not prime

Sample inpu
101
Sample output
Prime

*/


#include <stdio.h>

int IsPrime(int n)
{
    if (n <= 1)
        return 0;  // 1 এবং এর কম সংখ্যাগুলো প্রাইম নয়

    for (int i=2; i*i<=n; i++)
    {
        if (n%i == 0)
            return 0;  // যদি কোনো সংখ্যা n কে ভাগ করতে পারে, n প্রাইম নয়
    }
    return 1;  // প্রাইম হলে 1 রিটার্ন করবে
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (IsPrime(num))
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    return 0;
}
