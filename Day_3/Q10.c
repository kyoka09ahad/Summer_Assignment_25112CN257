//Write a program to print pime numbers in a range.

#include <stdio.h>
#include <math.h>

int isprime(long long n)
{
    if(n < 2) return 0;

    for(long long i = 2; i <= sqrt(n); i++)
    if(n % i == 0) return 0;

    return 1;
}

int main ()
{
    long long strt, end, i, j;

    printf("Enter the 'Start' of Range: ");
    if(scanf("%lld", &strt) != 1)
    {
        printf("Invalid Input: 'Enter postive integers'.\n");
        return 1;
    }

    printf("Enter the 'End' of Range: ");
    if(scanf("%lld", &end) != 1)
    {
        printf("Invalid Input: 'Enter postive integers'.\n");
        return 1;
    }

    if(strt < 0 || end < 0 || (strt && end) < 0)
    {
        printf("Invalid Input: 'Prime Numbers' are exclusively defined for positive integers.\n");
        return 1;
    }

    if((end - strt) < 2 || (end == strt) || (strt==0) && (end==2))
    {
        printf("Invalid Input: 'Prime Number' is not defined in this range.\n");
        return 1;
    }

    printf("The 'Prime Numbers' between %lld and %lld are: \n", strt, end);

    for (j=strt; j<=end; j++)
    {
        if(isprime(j)) printf("%lld, ", j);
    }

    return 0;

}