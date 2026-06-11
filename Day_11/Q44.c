//Write a program to write function to find factorial.

#include <stdio.h>

double factorial(int n)
{
    if(n == 0 || n == 1)
    {return 1;}

    else
    {return n * factorial(n-1);}
}

int main()
{
    int num;

    printf("Enter the number whose factorial has to be calculated: ");
    if(scanf("%d", &num) != 1 || num < 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Factorial of The Number is: %lf", factorial(num));

    return 0;
}