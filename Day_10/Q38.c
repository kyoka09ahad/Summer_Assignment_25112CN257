/*
Write a program to print reverse pyramid.
--------------------------------------------------------------------------------------------
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
--------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int height, i, j;

    printf("Enter the height of the reverse pyramid: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Reverse Star Pyramid Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        for(j=1; j<i; j++)
        {
            printf("  ");
        }

        for(j=1; j<=(1 + 2*(height-i)); j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}