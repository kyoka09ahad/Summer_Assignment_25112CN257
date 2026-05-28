//Write a program to print Multiplication Table of a given number.

#include <stdio.h>

int main()
{
    int num, i, mult;

    printf("Enter the Number whose Multiplication Table has to be printed: ");
    scanf("%d", &num);

    printf("The Multiplication Table of the number %d is given as\n", num);

    for(i=1; i<=10; i++)
    {   
       mult = num * i;
       printf("%d X %d equals %d \n", num, i, mult);
    }

    return 0;
}