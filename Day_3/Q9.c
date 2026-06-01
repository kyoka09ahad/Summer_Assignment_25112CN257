#include <stdio.h>

int main ()
{
    long long num, i, r;
    int iscomposite=0;
    
    printf("Enter a number: ");
    if(scanf("%lld",&num) != 1)
    {
        printf("Invalid Input: Enter 'Numbers' only.\n ");
        return 1;
    }

    if(num < 0)
    {
        printf("By convention, prime numbers are defined exclusively for positive integers.\nSo, please enter 'Positive Integers'.\n");
        return 1;
    }

    if(num == 0 || num == 1)
    {
        printf("The number %lld is neither prime nor composite",num);
        return 0;
    }

    if(num > 1)
    {
    for(i=2; i <= num/2; i++)
    {
        r = num % i;
        if(r == 0)
        {
            ++iscomposite;
            break;
        }      
    }
    
    if(iscomposite == 0)
    {printf("The number %lld is 'Prime'.\n",num);}

    if(iscomposite == 1)
    {printf("The number %lld is 'Composite'.\n",num);}
    }

    return 0;
}