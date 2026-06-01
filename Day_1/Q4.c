//Write a program to count digits in a number.

#include <stdio.h>

int main ()
{
    long long int num, num1, count=0;

    printf("Enter the number: ");
    if(scanf("%lld", &num) != 1)
    {
        printf("Invalid Input: 'Enter Numers Only'.\n");
       return  1;
    }

    num1 = num;

    while(num1 > 0)
    {
        num1 = num1 / 10;
        count++;
    }

    printf("The Count of Digits in the Entered Number %lld are: %lld", num, count);

    return 0;

}