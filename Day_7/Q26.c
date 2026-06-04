#include <stdio.h>

long long fibonacci(int n)
{
    if (n <= 1)   return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;

    printf("Enter the Number of Terms upto which the Conventional Fibonacci Series has to be printed: ");

    if (scanf("%d", &num) != 1 || num <= 0)
    {
        printf("Invalid Input:'Enter Mathematically defined number of terms'.\n");
        return 1;
    }

    printf("The Fibonacci Series upto %d terms:\n", num);

    for (int i = 0; i < num; i++)
    { printf("%lld ", fibonacci(i)); }

    printf("\n");

    return 0;
}