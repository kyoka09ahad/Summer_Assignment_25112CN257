//Write a program to Multiply matrices.

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
    printf("Multiplication of Matrices [A]x[B].\n");

    long long rows1, columns1, rows2, columns2;
    printf("\nEnter the Order of Matrix [A]\n");
    printf("Enter the Rows of the Matrix: ");
    if(scanf("%lld", &rows1) != 1 || rows1 <= 0)
    {
        printf("Invalid Number of Rows.\n");
        return 1;
    }
    printf("Enter the Columns of the Matrix: ");
    if(scanf("%lld", &columns1) != 1 || columns1 <= 0)
    {
        printf("Invalid Number of Columns.\n");
        return 1;
    }

    printf("\nEnter the Order of Matrix [B]\n");
    printf("Enter the Rows of the Matrix: ");
    if(scanf("%lld", &rows2) != 1 || rows2 <= 0)
    {
        printf("Invalid Number of Rows.\n");
        return 1;
    }
    printf("Enter the Columns of the Matrix: ");
    if(scanf("%lld", &columns2) != 1 || columns2 <= 0)
    {
        printf("Invalid Number of Columns.\n");
        return 1;
    }
    printf("\n");
    if(columns1 != rows2)
    {
        printf("The Order of Matrices is not compatible for Multiplication.\n");
        return 1;
    }

    else
    {
        long long A[rows1][columns1], B[rows2][columns2], Multiplication[rows1][columns2];

        printf("Enter the Elements of the Matrix A[%lld][%lld]:\n", rows1, columns1);
        inputMatrix(rows1, columns1, A);
        printf("\nThe Matrix A[%lld][%lld] is:\n", rows1, columns1);
        printMatrix(rows1, columns1, A);

        printf("\nEnter the Elements of the Matrix B[%lld][%lld]:\n", rows2, columns2);
        inputMatrix(rows2, columns2, B);
        printf("\nThe Matrix B[%lld][%lld] is:\n", rows2, columns2);
        printMatrix(rows2, columns2, B);

        for(long long i = 0; i < rows1; i++)
        {
            for(long long j = 0; j < columns2; j++)
            {
                long long multiply = 0;
                for(long long k = 0; k < rows2; k++)
                {
                    multiply += A[i][k]*B[k][j]; 
                }

                Multiplication[i][j] = multiply;
            }
        }
        printf("\nThe Resultant Multiplication of Matrices A[%lld][%lld]xB[%lld][%lld] is:\n", rows1, columns1, rows2, columns2);
        printMatrix(rows1, columns2, Multiplication);
    }

    return 0;
}