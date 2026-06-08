/*
Write a program to print character pyramid
--------------------------------------------------------------------------------------------
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
--------------------------------------------------------------------------------------------  
*/

#include <stdio.h>

int main()
{
    int height, i, j;

    printf("Enter the height of the character pyramid: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Character Pyramid Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        char character = 'A';
        for(j=1; j<=height-i; j++)
        {
            printf("  ");
        }

        for(j=1; j <= i; j++)
        {
            printf("%c ",character);
            character++;
        }
        
        --character;
        for(j=1; j <= i-1; j++)
        {
            character--;
            printf("%c ",character);
        }

        printf("\n");
    }
    return 0;
}