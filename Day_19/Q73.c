//Write a program to Add Matrices.

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

int main()
{
    long long rows, columns, number;

    printf("Enter the total Number of Matrices for Addition: ");
    if(scanf("%lld", &number) != 1 || number <= 0)
    {
        printf("Invalid Number of Matrices.\n");
        return 1;
    }

    printf("\nFor Addition of Matrices its necessary that all Matrices have the same Order.\n");
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

    long long matrix[rows][columns], sum[rows][columns];

    for(long long i = 0; i < rows; i++)
    {
        for(long long j = 0; j < columns; j++)
        {sum[i][j] = 0;}
    }

    for(long long k = 0; k < number; k++)
    {
        printf("Enter the Elements of Matrix_%lld:\n", k+1);
        for(long long i = 0; i < rows; i++)
        {
            for(long long j = 0; j < columns; j++)
            {
                printf("The Element[%lld][%lld] is: ", i+1, j+1);
                if(scanf("%lld", matrix[i][j]) != 1)
                {
                    printf("Invalid Input.\n");
                    return 1;
                }

                sum[i][j] += matrix[i][j];
            }
        }
        printf("\nThe Matrix_%lld is:\n", k+1);
        printMatrix(rows, columns, matrix);
        printf("\n");
    }

    printf("\nThe Resultant Sum of Matrices is:\n");
    printMatrix(rows, columns, sum);

    return 0;
}