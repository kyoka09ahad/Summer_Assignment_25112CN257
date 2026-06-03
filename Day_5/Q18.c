//Write a program to check Strong Number.

#include <stdio.h>

long long factorial(int a)
{
    long long fact = 1;

    for(int i=1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main ()
{
    long long num, sum=0;

    printf("Enter a number: ");
    if(scanf("%lld", &num) != 1 || num < 0)
    {
        printf("Invalid Input.'Enter Positive Integers only'.\n");
        return 1;
    }

    if(num == 0)
    {
        printf("The number 0 is 'not' a 'Strong Number'.\n");
        return 0;
    }

        long long tempNum = num;

        while(tempNum > 0)
        {
            int r = tempNum % 10;
            sum = sum + factorial(r);
            tempNum /= 10;
        }

        if(sum == num)
        {printf("The number %lld is a 'Strong Number'.\n",num);}

        else
        printf("The number %lld is 'not' a 'Strong Number'.\n",num);

    return 0;
}