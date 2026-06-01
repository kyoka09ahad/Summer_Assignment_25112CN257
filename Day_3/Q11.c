//Write a program to find GCD of two numbers.

#include <stdio.h>

int main()
{
    long long num1, num2, i;

    printf("Enter the first number: ");
    if(scanf("%lld", &num1) != 1)
    {
        printf("Invalid Input: 'Enter Numbers Only'.\n");
        return  1;
    }

    printf("Enter the second number: ");
    if(scanf("%lld", &num2) != 1)
    {
        printf("Invalid Input: 'Enter Numbers Only'.\n");
        return  1;
    }

    if(num1<1 || num2<1 || (num1 && num2)<1)
    {
        printf("The GCD is not conventionally defined for negative integers and zeroes.\nPlease enter 'Positive Numbers' only.\n");
        return 1;
    }

    if(num1 == num2)
    {
        printf("The Greatest Common Divisor(GCD) of the input values = %lld\n",num1);
        return 0;
    }

    long long snum, lnum;
    (num1 < num2) ?  ((snum = num1)&&(lnum = num2)) : ((snum = num2)&&(lnum = num1));

    printf("The smaller number = %lld\n",snum);
    printf("The larger number = %lld\n",lnum);

    for(i=snum; i>0; i--)
    {
     if((lnum % i == 0) && (snum % i == 0))
     {break; }
    }

    printf("The Greatest Common Divisor(GCD) of the input values = %lld\n",i);

    return 0;
}