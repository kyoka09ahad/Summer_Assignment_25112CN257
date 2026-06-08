/*
Write a program to print number triangle.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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

    printf("The Number Triangle Pattern is:\n");

    for(i=1; i<=height; i++)
    {
        num = 1;
        for(j=1; j<=i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}