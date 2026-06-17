//Write a program to Merge arrays.

#include <stdio.h>

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
    int num;
    printf("Enter the Number of Arrays that have to be Merged: ");
    if(scanf("%d", &num) != 1 || num < 0)
    {
        printf("Invalid Number of Arrays.\n");
        return 1;
    }
    printf("\n");

    int sizes[num];
    int totalSize = 0;
    for(int i = 0; i < num; i++)
    {
        printf("Enter the length(size) of Array_%d: ", i+1);
        scanf("%d", &sizes[i]);
        totalSize += sizes[i];
    }
    printf("\n");

    long long merged[totalSize];
    int index = 0;

    for(int i = 0; i < num; i++)
    {
        long long array[sizes[i]];
        printf("Enter the Elements of Array_%d:\n", i+1);

        for(int j = 0; j < sizes[i]; j++)
        {
            printf("Enter the %d%s element: ",j+1, (j+1<=3) ? ((j+1==1) ? "st" : ((j+1==2) ? "nd" : "rd")) :"th");
            scanf("%lld", &array[j]);
            merged[index++] = array[j];
        }
        printf("The Elements in the Array_%d are:\n", i+1);
        printArray(array, sizes[i]);

        printf("\n");
    }

    printf("The Merged Array is:\n");
    printArray(merged, index);
    printf("\n");

    return 0;
}