//Write a program to write function to find sum of two numbers.

#include <stdio.h>

long long sum(long a, long b)
{
    return a + b;
}

int main()
{
    long long num1, num2;

    printf("Enter the first number: ");
    if(scanf("%lld", &num1) != 1)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if(scanf("%lld", &num2) != 1)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Sum of the Two Entered Numbers is:\n");
    printf("%lld", sum(num1, num2));

    return 0;
}