//Write a program to print half pyramid pattern.

#include <stdio.h>

int main()
{
    int num, i, j;

    printf("Enter the height of the pyramid: ");
    if(scanf("%d", &num) != 1 || num <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Half Pyramid Pattern is:\n");

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num-i; j++)
        {
            printf("  ");
        }

        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}