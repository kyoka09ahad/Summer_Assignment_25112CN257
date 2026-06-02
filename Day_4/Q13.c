//Write a program to generate Fibonacci Series.

#include <stdio.h>
int main()
{
    long long t1, t2, num, i, fibo;

    printf("The nth Fibonacci Number is expressed as: F(n) = F(n-1) + F(n-2)\n");
    printf("Conventionally the initial starting conditions are: F(0) = 0 and F(1) = 1\n");

    printf("Enter the first two terms to generate the Fibonacci series.\n");

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

    printf("Enter the number of terms upto which the Fibonacci Series has to be generated: ");
    if(scanf("%lld", &num) != 1)
    {
        printf("Invalid Input: 'Enter Numbers Only'.\n");
        return 1;
    }

    if(num <= 0)
    {
        printf("Enter Mathematically defined number of terms");
        return 1;
    }

    for(i=1; i<=num; i++)
    {
        printf("%lld, ",t1);
        fibo = t1 + t2;
        t1 = t2;
        t2 = fibo;
    }

    return 0;
    
}