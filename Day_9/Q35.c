/*
Write a program to print repeated character pattern.
--------------------------------------------------------------------------------------------
A
B B
C C C
D D D D
E E E E E
--------------------------------------------------------------------------------------------
*/



#include <stdio.h>

int main()
{
 int height, i, j;
 char character = 'A';

    printf("Enter the height of the pattern: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Repeated Character Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", character);
        }
        character++;
        printf("\n");
    }

    return 0;
}