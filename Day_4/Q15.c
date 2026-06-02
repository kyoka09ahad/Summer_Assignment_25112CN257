// Write a program to check Armstrong Number.

#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main(void)
{
    long long num;

    printf("Enter a number: ");

    if(scanf("%lld", &num) != 1 || num < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    long long originalNum = num;
    long long tempNum = num;
    long long arms = 0;
    int count = 0;

    if(tempNum == 0)
    {
        count = 1;
    }
    else
    {
        while(tempNum > 0)
        {
            count++;
            tempNum /= 10;
        }
    }

    tempNum = num;

    do
    {
        int digit = tempNum % 10;
        arms += power(digit, count);
        tempNum /= 10;
    }
    while(tempNum > 0);

    if(arms == originalNum)
    {
        printf("%lld is an Armstrong number.\n", originalNum);
    }
    else
    {
        printf("%lld is not an Armstrong number.\n", originalNum);
    }

    return 0;
}