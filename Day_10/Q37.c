/*
Write a program to print star pyramid.
--------------------------------------------------------------------------------------------
      *
    * * *  
  * * * * *
* * * * * * *
--------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int height, i, j;

    printf("Enter the height of the pyramid: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Star Pyramid Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        for(j=1; j<=height-i; j++)
        {
            printf("  ");
        }

        for(j=1; j <= (1 + 2*(i-1)); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}