//Write a program to print Multiplication Table of a given number.

#include <stdio.h>

int main()
{
    int i;
    float num, mult;

    printf("Enter the Number whose Multiplication Table has to be printed: ");
    if(scanf("%f", &num) != 1)
    {
       printf("Invalid Input: 'Enter Numers Only'.\n");
       return  1;
    }

    printf("The Multiplication Table of The Number %f is given as\n", num);

    for(i=1; i<=10; i++)
    {   
       mult = num * i;
       printf("%f X %d equals %f \n", num, i, mult);
    }

    return 0;
}