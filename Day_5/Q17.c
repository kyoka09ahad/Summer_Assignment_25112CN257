//Write a program to check Perfect Number.

#include <stdio.h>

int main()
{
    long long num, i, sum=0;

    printf("Enter a number: ");
    if(scanf("%lld", &num) != 1 || num <= 0)
    {
        printf("Invalid Input.'Enter Positive Numbers only'.\n");
        return 1;
    }

    long long tempNum = num;

    for(i=1; i<=num/2; i++)
    {
        int r = tempNum % i;

        if(r == 0)
        {sum = sum + i;}
    }

    if(sum == num)
    printf("The number %lld is a 'Perfect Number'.",num);

    else
    printf("The number %lld is 'not' a 'Perfect Number'.",num);

    return 0;
}