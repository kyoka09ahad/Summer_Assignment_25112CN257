//Write a program to print Factors of a Number.

#include <stdio.h>

int main()
{
    long long num, i;

    printf("Enter a number: ");
    if(scanf("%lld", &num) != 1 || num <= 0)
    {
        printf("Invalid Input.'Enter Positive Numbers only'.\n");
        return 1;
    }

    printf("The factors of the number %lld are: \n",num);

    for(i=1; i<=num/2; i++)
    {
        int r = num % i;

        if(r == 0)
        {printf("%lld ",i);}
    }
    
    printf("\n");

    return 0;
}