//Write a program to calculate sum of first N natural numbers.

#include <stdio.h>

int main()
{
    long long n, sum ;

    printf("Enter the Natural Number upto which the sum of all numbers has to be calculated: ");
    if(scanf("%lld", &n) != 1)
    {
       printf("Invalid Input: 'Enter Numers Only'.\n");
       return  1;
    }

    if(n <= 0)
    {
        printf("Error: Please enter only 'Natural Numbers'.\n");
        return 1;
    }

    sum = n*(n+1)/2;

    printf("Thus, the Sum of First %lld Natural Numbers is: %lld\n", n, sum);

    return 0 ;
}