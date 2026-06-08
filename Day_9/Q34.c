/*
Write a program to print reverse number triangle.
--------------------------------------------------------------------------------------------
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
--------------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
 int height, i, j, num;

    printf("Enter the height of the triangle: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Reverse Number Triangle is:\n");

    for(i=1; i<=height; i++)
    {
        num = 1;
        for(j=i; j<=height; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}