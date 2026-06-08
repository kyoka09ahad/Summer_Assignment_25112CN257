/*
Write a program to print hollow square pattern.
--------------------------------------------------------------------------------------------
*  *  *  *  *
*           *
*           *
*           *
*  *  *  *  *
--------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int height, i, j;

    printf("Enter the height of the hollow square pattern: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Hollow Square Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        if(i==1 || i==height)
        {
        for(j=1; j<=height; j++)
        {printf("*  ");}
        }

        if(i>1 && i<height)
        {
        for(j=1; j<=1; j++)
        {printf("*  ");}

        for(j=j; j<height; j++)
        {printf("   ");}

        for(j=j; j<=height;j++)
        {printf("*  ");}
        }

        printf("\n");
    }
    return 0;
}