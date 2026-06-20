//Write a program to Find row-wise sum.

#include <stdio.h>

void printMatrix(long long rows, long long columns, long long matrix[rows][columns])
{
    for(long long i = 0; i < rows; i++)
    {
        for(long long j = 0; j < columns; j++)
        {
            printf("%lld\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void inputMatrix(long long rows, long long columns, long long matrix[rows][columns])
{
    for(long long i = 0; i < rows; i++)
    {
        for(long long j = 0; j < columns; j++)
        {
            printf("The Element[%lld][%lld]: ", i+1, j+1);
            scanf("%lld", &matrix[i][j]);
        }
    }
}

int main()
{
    long long rows, columns;

    printf("Enter the Number of Rows of the Matrix: ");
    if(scanf("%lld", &rows) != 1 || rows <= 0)
    {
        printf("Invalid Number of Rows.\n");
        return 1;
    }

    printf("Enter the Number of Columns of the Matrix: ");
    if(scanf("%lld", &columns) != 1 || columns <= 0)
    {
        printf("Invalid Number of Columns.\n");
        return 1;
    }

    long long matrix[rows][columns];
    printf("\nInput the Elements of the Matrix to find the Row-Wise Sum.\n");
    inputMatrix(rows, columns, matrix);
    printf("\nThe Input Matrix is:\n");
    printMatrix(rows, columns, matrix);

    printf("\nThe Row-Wise Sum is given as:\n");
    for(long long i = 0; i < rows; i++)
    {
        long long sum = 0;

        for(long long j = 0; j < columns; j++)
        {sum += matrix[i][j];}

        printf("The Sum of the Elements of Row-%lld is: %lld\n", i+1, sum);
    }

    return 0;
}