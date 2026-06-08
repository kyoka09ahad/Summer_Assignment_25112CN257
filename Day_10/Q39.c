/*
Write a program to print number pyramid.
--------------------------------------------------------------------------------------------
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
--------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int height, i, j, num;

    printf("Enter the height of the number pyramid: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Number Pyramid Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        num = 1;
        for(j=1; j<=height-i; j++)
        {
            printf("  ");
        }

        for(j=1; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        
        --num;
        for(j=1; j <= i-1; j++)
        {
            num--;
            printf("%d ",num);
        }

        printf("\n");
    }
    return 0;
}