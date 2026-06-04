//Write a program to recursive sum of digits.

#include <stdio.h>

int sumOfDigits(long long n)
{
    if(n == 0)  return 0;

    return (n % 10) + sumOfDigits(n/10);
}

int main ()
{
    long long num;

    printf("Enter a number: ");
    if(scanf("%lld",&num) != 1)
    {
        printf("Invalid Input.'Enter Whole Integers only'.\n");
        return 1;
    }

    long long tempNum = (num < 0) ? -num : num;

    printf("The sum of digits of the number %lld is = %d \n",num, sumOfDigits(tempNum));

    return 0;
}