//Write a program to Rotate array left.

#include <stdio.h>

void leftRotate(long long array[], long long n, long long k)
{
    k %= n;

    for (long long r = 0; r < k; r++)
    {
        long long first = array[0];

        for (long long i = 0; i < n - 1; i++)
        {
            array[i] = array[i + 1];
        }

        array[n - 1] = first;
    }
}

void printArray(long long array[], long long n)
{
    for (long long i = 0; i < n; i++)
    {
        printf("%lld ", array[i]);
    }
    printf("\n");
}

int main()
{
    long long length, rotate, i;

    printf("Enter the length(size) of array: ");
    if (scanf("%lld", &length) != 1 || length <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    long long array[length];

    printf("Input the Elements into the Array:\n");
    for(i=0; i<length; i++)
    {
    printf("Enter the %lld%s element: ",i+1, (i+1<=3) ? ((i+1==1) ? "st" : ((i+1==2) ? "nd" : "rd")) :"th");
    if(scanf("%lld", &array[i]) != 1)
        {
            printf("Invalid Input.\n");
            return 1;
        }
    printf("\n");
    }

    printf("The Input Array is:\n");
    printArray(array, length);
    printf("\n");

    printf("Enter Number of Left Rotations: ");
    if (scanf("%lld", &rotate) != 1 || rotate < 0)
    {
        printf("Invalid rotation count.\n");
        return 1;
    }

    leftRotate(array, length, rotate);

    printf("Array after Left Rotation:\n");
    printArray(array, length);

    return 0;
}