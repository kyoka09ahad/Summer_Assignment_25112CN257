//Write a program to recursive reverse number.

#include <stdio.h>

long long reverse(long long n, long long rev)
{
    if(n == 0)   return rev;

    return  reverse(n / 10, rev*10 + n % 10);
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

    printf("The Reverse of the number %lld is = %lld \n",num, reverse(num, 0));

    return 0;
}