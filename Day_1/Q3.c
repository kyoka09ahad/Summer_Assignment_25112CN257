//Write a program to find Factorial of a number.

#include <stdio.h>

int main()
{
    int n, i;
    long long int fact = 1;

    printf("Enter the Number whose Factorial has to be calculated: ");
    if(scanf("%d", &n) != 1)
    {
    printf("Invalid Input: 'Enter Numers Only'.\n");
       return  1;
    }

    if (n < 0)
    {
        printf("Error: Please enter 'Whole Numbers' only \n");
        return 1;
    }

    else if (n == 0)
    {
        printf("The Factorial of '0' is equal to 1 \n");
        return 1;
    }

    for(i=1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("The Factorial of '%d' is equal to %lld \n", n, fact);

    return 0;
}