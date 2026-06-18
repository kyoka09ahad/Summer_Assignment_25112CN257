//Write a program to find Diagonal Sum.

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

long long diagonalSum(long long order, long long matrix[order][order])
{
    long long sum = 0;
    for(long long i = 0; i < order; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

int main()
{
    long long order;
    printf("The Diagonal Sum of a Matrix is only possible for Square Matrices.\n");
    printf("This implies that the Matrix should have an Equal Order(Number of Rows = Number of Columns).\n");

    printf("\nThe Diagonal Sum is the sum of Diagonal Elements of a Square Matrix.\n");
    printf("The Diagonal Elements of a Square Matrix are of type 'Element[i][i]'.\n");

    printf("\nEnter the Order of the Square Matrix: ");
    if(scanf("%lld", &order) != 1 || order <= 0)
    {
        printf("Invalid Order.\n");
        return 1;
    }
    
    printf("Thus the Order of the Matrix is: %lldx%lld", order, order);

    long long matrix[order][order];

    printf("\nEnter the Elements in the Square Matrix:\n");
    inputMatrix(order, order, matrix);

    printf("\n\nThe Square Matrix is:\n");
    printMatrix(order, order, matrix);

    printf("\nThe Diagonal Sum of the Square Matrix is: %lld", diagonalSum(order, matrix));

    return 0;
}