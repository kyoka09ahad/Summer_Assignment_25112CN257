//Write a program to write function for Armstrong.

#include <stdio.h>
long long power(int base, int exponent)
{
    long long result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

long long isArmstrong(long long n)
{
    if(n < 0) return 0;

    int count = 0;
    long long original = n, temporary = n, armstrong = 0;

    if(n == 0)
    count = 1;

    while(n > 0)
    {
        n /= 10;
        count++;
    }

    while(temporary > 0)
    {
        int r = temporary % 10;
        armstrong = armstrong + power(r, count);
        temporary = temporary / 10;
    }

    return armstrong == original;
}

int main()
{
    long long num;

    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) 
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("%lld is%s an Armstrong Number.\n", num, isArmstrong(num) ? "" : " not");
    return 0;
}