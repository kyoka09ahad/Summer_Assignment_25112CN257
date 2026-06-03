//Write a program to find x^n without pow().

#include <stdio.h>

int main()
{
    float base, exponent;
    long long power, i;

    printf("Enter the base of the exponent: ");
    if(scanf("%f",&base) != 1 || base < 0)
    {
        printf("Invalid Input.'Enter Postive Real Numbers only'.\n");
        return 1;
    }

    printf("Enter the power of the exponent (accepts integral values): ");
    if(scanf("%lld",&power) != 1)
    {
        printf("Invalid Input.'Enter Integers only'.\n");
        return 1;
    }

    if(power < 0)
    {
        power = -power;
        exponent = 1;

        for(i=1; i<=power; i++)
        {
            exponent /= base;
        }

        printf("Thus, (%f)^%lld is = %.3f", base, power, exponent);

        return 0;
    }

    if(power == 0)
    {
       if(base == 0)
       {printf("Indeterminate Value.\n");}

        else
        printf("Thus, (%f)^%lld is = 1", base, power);

        return 0;
    }

    if(power > 0)
    {
        exponent = 1;

        for(i=1; i<=power; i++)
        {
            exponent *= base;
        }

        printf("Thus, (%f)^%lld is = %.3f", base, power, exponent);
        
        return 0;
    }

    return 0;   
}