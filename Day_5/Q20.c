//Write a Programe to find Largest Prime Factor.

#include <stdio.h>

int main(void)
{
    long long num;
    long long originalNum = num;

    printf("Enter a number: ");
    if(scanf("%lld",&num) != 1 || num < 2)
    {
        printf("Invalid Input.'Enter an Integer greater than 1'.\n");
        return 1;
    }

    long long largestPrimeF = 1;

    while(num % 2 == 0)
    {
        largestPrimeF = 2;
        num /= 2;
    }

    for(long long factor=3; factor*factor<=num; factor = factor + 2)
    {
        while(num % factor == 0)
        {
            largestPrimeF = factor;
            num /= factor;
        }
    }

    if(num > 1)
    {largestPrimeF = num;}

    printf("The Largest Prime Factor of the Entered Number is = %lld", largestPrimeF);

    return 0;
}