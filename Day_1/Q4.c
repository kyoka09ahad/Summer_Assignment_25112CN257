//Write a program to count digits in a number.

#include <stdio.h>

int main ()
{
    long long int num, num1, count=0;

    printf("Enter the number: ");
    scanf("%lld", &num);

    num1 = num;

    while(num1 > 0)
    {
        num1 = num1 / 10;
        count++;
    }

    printf("The count of digits in the entered number %lld are: %lld", num, count);

    return 0;

}