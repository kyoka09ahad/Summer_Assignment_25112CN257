//Write a program to convert binary to decimal.

#include <stdio.h>
#include <math.h>

int main ()
{
    long long num, base=1, decimal=0;

    printf("Enter the binary number (Decimal values would be neglected if entered): ");
    if(scanf("%lld",&num) != 1 )
    {
        printf("Invalid Input: Enter '0's and '1's only.\n");
        return 1;
    }

    while(num > 0)
    {
        int remainder = num % 10;
        if(remainder != 0 && remainder != 1)
        {
            printf("Invalid Input: Enter '0's and '1's only.\n");
            return 1;
        }
        
        decimal += base * remainder;

        base *= 2;

        num /= 10;
    }
    printf("Decimal Equivalent is = %lld\n",decimal);

    return 0;
}