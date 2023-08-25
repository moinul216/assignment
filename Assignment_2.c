#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int generatePrime(int N)
{
    for (int i = 2; i < N; i++)
    {
        isPrime(i);
        if (isPrime(i) == 1)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    generatePrime(N);
}