//Write a program to Selection Sort.

#include <stdio.h>

void printArray(long long array[], long long n)
{
    for (long long i = 0; i < n; i++)
    {
        printf("%lld ", array[i]);
    }
    printf("\n");
}

int inputArray(long long array[], long long n)
{
    for(long long i = 0; i < n; i++)
    {
        printf("Enter the %lld%s element: ", i+1, (i+1 <= 3) ? ((i+1 == 1) ? "st" : ((i+1 == 2) ? "nd" : "rd")) : "th");
        if(scanf("%lld", &array[i]) != 1)
        {
            printf("Invalid Input.\n");
            return 0;
        }
    }
    return 1;
}

int main()
{
    long long length;

    printf("Enter the length(size) of array: ");
    if(scanf("%lld", &length) != 1 || length <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    long long array[length];
    printf("Input the Elements into the Array:\n");

    if(!inputArray(array, length))
    {return 1;}
    printf("\n");

    printf("The Input Array is:\n");
    printArray(array, length);

    for(long long i = 0; i < length; i++)
    {
        long long minIndex = i;

        for(long long j = i+1; j < length-1; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }

        long long temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
    }

    printf("The Sorted Array is:\n");
    printArray(array, length);

    return 0;
}