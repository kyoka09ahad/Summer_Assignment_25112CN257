//Write a program to find nth Fibonacci term.

#include <stdio.h>
int main()
{
    long long t1, t2, num, i, fibo;

    printf("The nth Fibonacci Number is expressed as: F(n) = F(n-1) + F(n-2)\n");
    printf("Conventionally the initial starting conditions are: F(0) = 0 and F(1) = 1\n");

    printf("Enter the first two terms of the Fibonacci series.\n");

    printf("Enter the First Term: ");
    if(scanf("%lld",&t1) != 1)
    {
        printf("Invalid Input: 'Enter Numbers Only'.\n");
        return 1;
    }

    printf("Enter the Second Term: ");
    if(scanf("%lld",&t2) != 1)
    {
        printf("Invalid Input: 'Enter Numbers Only'.\n");
        return 1;
    }

    printf("Enter the number of terms of the Fibonacci Series: ");
    if(scanf("%lld", &num) != 1 || num <= 0)
    {
        printf("Invalid Number of terms.\n");
        return 1;
    }

    for(i=1; i < num; i++)
    {
        fibo = t1 + t2;
        t1 = t2;
        t2 = fibo;
    }

    printf("The %lldth Fibonacci Term is: %lld", num, t1);

    return 0;
    
}