//Write a program to print Armstrong Numbers in a range.

#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;

    for(int i = 0; i < exponent; i++)
    { result *= base; }

    return result;
}

int main (void)
{
    long long num1, num2, j;
    printf("Enter the Range to print the Armstrong Number.\n");

    printf("Enter the First Term: ");
    if(scanf("%lld",&num1) != 1 || num1<0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("Enter the End Term: ");
    if(scanf("%lld",&num2) != 1 || num2<0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    if((num1 == num2) || (num1 > num2))
    {printf("Invalid Range.\n");}

    for(j=num1; j<=num2; j++)
    {
       long long temp = j;
        long long sum = 0;

        int count = 0;
        long long copy = j;

        if (copy == 0)
        {count = 1;}
        else
        {
            while (copy > 0)
            {
                count++;
                copy /= 10;
            }
        }

        copy = j;
        
        while (copy > 0)
        {
            int digit = copy % 10;
            sum += (long long)power(digit, count);
            copy /= 10;
        }

        if (j == 0)
        { sum = 0;}

        if (sum == j)
        { printf("%lld ", j);}
    }

    printf("\n");

    return 0;
}