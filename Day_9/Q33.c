/*
Write a program to print reverse star pattern.
-----------------------------------------------------------------------------------------
* * * * *
* * * *
* * *
* * 
*
-----------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int height, i, j;

    printf("Enter the height of the pattern: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Reverse Star Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        for(j=i; j<=height; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}