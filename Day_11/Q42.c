//Write a program to write function to find maximum.

#include <stdio.h>

long long maximum(long long a, long long b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    long long num1, num2;

    printf("Enter two numbers: ");

    if (scanf("%lld %lld", &num1, &num2) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (num1 == num2)
    {
        printf("Both numbers are equal: %lld\n", num1);
    }
    else
    {
        printf("The maximum number is: %lld\n", maximum(num1, num2));
    }

    return 0;
}