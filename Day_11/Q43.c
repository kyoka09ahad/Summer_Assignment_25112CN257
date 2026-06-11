//Write a program to write function to check prime.

#include <stdio.h>

long long isPrime(long long n)
{
    int i;

    if (n <= 1)
    return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        return 0;
    }

    return 1;
}

int main()
{
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (isPrime(num))
    printf("%lld is a prime number.\n", num);
    
    else
    printf("%lld is not a prime number.\n", num);

    return 0;
}