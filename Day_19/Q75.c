//Write a program to Transpose matrix.

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
    printf("The Transpose of a Matrix is only possible for Square Matrices.\n");
    printf("This implies that the Matrix should have an Equal Order(Number of Rows = Number of Columns).\n");

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
        {
            transpMatrix[i][j] = matrix[j][i];
        }
    }

    printf("\nThe Transpose of the Square Matrix is:\n");
    printMatrix(order, order, transpMatrix);

    return 0;
}