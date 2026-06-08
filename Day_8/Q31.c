/*
Write a program to print character triangle.
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>

int main()
{
    int height, i, j;

    printf("Enter the height of the triangle: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Number Triangle Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        char character = 'A';
        for(j=1; j<=i; j++)
        {
            printf("%c ",character);
            character++;
        }
        printf("\n");
    }
    return 0;
}