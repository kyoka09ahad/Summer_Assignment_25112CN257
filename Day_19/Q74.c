//Write a program to Subtract Matrices.

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

    printf("Subtraction of Matrices of the type A[i][j] - B[i][j]\n");
    
    printf("\nFor Subtraction of Matrices its necessary that all Matrices have the same Order.\n");
    printf("So, Enter the Order of Matrices.\n");
    printf("\n");
    
    printf("Enter the Number of Rows of the Matrices: ");
    if(scanf("%lld", &rows) != 1 || rows <= 0)
    {
        printf("Invalid Number of Rows.\n");
        return 1;
    }

    printf("Enter the Number of Columns of the Matrices: ");
    if(scanf("%lld", &columns) != 1 || columns <= 0)
    {
        printf("Invalid Number of Colums.\n");
        return 1;
    }

    long long A[rows][columns], B[rows][columns], Subtracted[rows][columns];

    printf("Enter the Elements of the Matrix A[%lld][%lld]:\n", rows, columns);
    inputMatrix(rows, columns, A);
    printf("\nThe Matrix A[%lld][%lld] is:\n", rows, columns);
    printMatrix(rows, columns, A);

    printf("\nEnter the Elements of the Matrix B[%lld][%lld]:\n", rows, columns);
    inputMatrix(rows, columns, B);
    printf("\nThe Matrix B[%lld][%lld] is:\n", rows, columns);
    printMatrix(rows, columns, B);

    for(long long i = 0; i < rows; i++)
    {
        for(long long j = 0; j < columns; j++)
        {
            Subtracted[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("\nThe Resultant Subtraction of the Matrices is:\n");
    printf("A[%lld][%lld] - B[%lld][%lld]\n", rows, columns, rows, columns);
    printMatrix(rows, columns, Subtracted);

    return 0;
}