//Write a program to Recursive factorial.

#include <stdio.h>

unsigned long long int factorial(long long n)
{
    if(n == 0 || n == 1)
    {return 1;}

    else
    {return n * factorial(n-1);}
}

int main ()
{
    long long num;

    printf("Enter a number: ");
    if(scanf("%lld",&num) != 1 || num < 0)
    {
        printf("Invalid Input.'Enter Whole Numbers only'.\n");
        return 1;
    }

    printf("The factorial of the number %lld is = %llu\n", num, factorial(num));

    return 0;
}