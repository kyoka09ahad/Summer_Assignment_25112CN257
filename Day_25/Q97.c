//Write a program to Merge two sorted arrays.

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
    long long num;
    printf("Enter the Number of Arrays that have to be Merged: ");
    if(scanf("%lld", &num) != 1 || num < 0)
    {
        printf("Invalid Number of Arrays.\n");
        return 1;
    }
    printf("\n");

    long long sizes[num];
    long long totalSize = 0;
    for(long long i = 0; i < num; i++)
    {
        printf("Enter the length(size) of Array_%lld: ", i+1);
        scanf("%lld", &sizes[i]);
        totalSize += sizes[i];
    }

    long long merged[totalSize];
    long long index = 0;

    for(long long i = 0; i < num; i++)
    {
        long long array[sizes[i]];
        printf("\nEnter the Elements of Array_%lld:\n", i+1);
        inputArray(array, sizes[i]);
        printf("The Input Array_%lld is:\n", i+1);
        printArray(array, sizes[i]);
        
        printf("\nThe Sorted Array_%lld is:\n", i+1);
        for(long long j = 0; j < sizes[i]; j++)
        {
            for(long long k = 0; k < sizes[i]-j-1; k++)
            {
                if(array[k] > array[k+1])
                {
                    long long temp = array[k];
                    array[k] = array[k+1];
                    array[k+1] = temp;
                }
            }
            merged[index++] = array[j];
        }
        printArray(array, sizes[i]);   
    }

    printf("\nThe Merged Sorted Arrays is:\n");
    printArray(merged, totalSize);

    return 0;
}