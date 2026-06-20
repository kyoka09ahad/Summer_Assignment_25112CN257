//Write a program to Check symmetric matrix.

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
    long long order;
    printf("The Symmetry of a Matrix is a property of a Square Matrices.\n");
    printf("This implies that the Matrix should have an Equal Order(Number of Rows = Number of Columns).\n");
    printf("\nIf the Transpose of a Matrix is equal to the original Matrix then its said to be Symmetric.\n");

    printf("\nEnter the Order of the Square Matrix: ");
    if(scanf("%lld", &order) != 1 || order <= 0)
    {
        printf("Invalid Order.\n");
        return 1;
    }
    
    printf("Thus the Order of the Matrix is: %lldx%lld", order, order);

    long long matrix[order][order];
    long long transpMatrix[order][order];

    printf("\nEnter the Elements in the Square Matrix:\n");
    inputMatrix(order, order, matrix);

    printf("\n\nThe Square Matrix is:\n");
    printMatrix(order, order, matrix);

    for(long long i = 0; i < order; i++)
    {
        for(long long j = 0; j < order; j++)
        {transpMatrix[i][j] = matrix[j][i];}
    }

    for(long long i = 0; i < order; i++)
    {    
        for(long long j = 0; j < order; j++)
        {
            if(transpMatrix[i][j] != matrix[i][j])
            {
                printf("\nThe Matrix is Not Symmetric.\n");
                return 0;
            }
        }  
    }

    printf("\nThe Matrix is Symmetric.\n");

    return 0;
}