/*
Write a program to print repeated number pattern.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>

int main()
{
    int height, i, j, num;

    printf("Enter the height of the pattern: ");
    if(scanf("%d", &height) != 1 || height <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("The Repeated Number Pattern is:\n");

    num = 1;
    for(i=1; i<=height; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",num);
        }
        num++;
        printf("\n");
    }
    return 0;
}