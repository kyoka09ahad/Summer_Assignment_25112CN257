//Write a program to write function for fibonacci.

#include <stdio.h>

void fibonacci(long long n)
{
    long long a = 0, b = 1, fibo;

    for (long long i = 1; i <= n; i++)
    {
        printf("%lld ", a);
        fibo = a + b;
        a = b;
        b = fibo;
    }
    printf("\n");
}

int main()
{
    long long num;

    printf("Enter the number of terms of the Fibonacci series: ");
    if (scanf("%lld", &num) != 1 || num <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    if (num > 92)
    {
        printf("Input too large.\n");
        return 1;
    }

    printf("Fibonacci series up to %lld terms:\n", num);
    fibonacci(num);

    return 0;
}