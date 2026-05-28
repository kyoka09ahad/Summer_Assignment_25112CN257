//Write a program to calculate sum of first N natural numbers.

#include <stdio.h>

int main()
{
    long long n, sum ;

    printf("Enter the Natural Number upto which the sum has to be calculated: ");
    scanf("%lld", &n);

    if(n <= 0)
    {
        printf("Error: Please enter only 'Natural Numbers'.\n");
        return 1;
    }

    sum = n*(n+1)/2;

    printf("Thus, the sum of first %lld Natural Numbers is: %lld\n", n, sum);

    return 0 ;
}