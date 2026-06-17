//Write a program to Intersection of arrays.

#include <stdio.h>

void printArray(long long array[], long long n)
{
    for(long long i = 0; i < n; i++)
    {
        printf("%lld ", array[i]);
    }
    printf("\n");
}

int main()
{
    int num;

    printf("Enter the Number of Arrays: ");
    if(scanf("%d", &num) != 1 || num <= 0)
    {
        printf("Invalid Number of Arrays.\n");
        return 1;
    }

    printf("\n");

    int sizes[num];
    int maxSize = 0;

    for(int i = 0; i < num; i++)
    {
        printf("Enter the length(size) of Array_%d: ", i + 1);

        if(scanf("%d", &sizes[i]) != 1 || sizes[i] <= 0)
        {
            printf("Invalid Array Size.\n");
            return 1;
        }

        if(sizes[i] > maxSize)
        {
            maxSize = sizes[i];
        }
    }

    printf("\n");

    long long arrays[num][maxSize];

    for(int i = 0; i < num; i++)
    {
        printf("Enter the Elements of Array_%d:\n", i + 1);

        for(int j = 0; j < sizes[i]; j++)
        {
            printf("Enter the %d%s element: ",
                   j + 1,
                   (j + 1 <= 3)
                       ? ((j + 1 == 1) ? "st"
                          : (j + 1 == 2) ? "nd"
                          : "rd")
                       : "th");

            if(scanf("%lld", &arrays[i][j]) != 1)
            {
                printf("Invalid Input.\n");
                return 1;
            }
        }

        printf("The Elements in Array_%d are:\n", i + 1);
        printArray(arrays[i], sizes[i]);
        printf("\n");
    }

    long long intersection[sizes[0]];
    int count = 0;

    for(int i = 0; i < sizes[0]; i++)
    {
        long long current = arrays[0][i];

        int duplicate = 0;

        for(int k = 0; k < count; k++)
        {
            if(intersection[k] == current)
            {
                duplicate = 1;
                break;
            }
        }

        if(duplicate)
        {
            continue;
        }

        int foundInAll = 1;

        for(int j = 1; j < num; j++)
        {
            int found = 0;

            for(int k = 0; k < sizes[j]; k++)
            {
                if(arrays[j][k] == current)
                {
                    found = 1;
                    break;
                }
            }

            if(!found)
            {
                foundInAll = 0;
                break;
            }
        }

        if(foundInAll)
        {
            intersection[count++] = current;
        }
    }

    printf("The Intersection of Arrays is:\n");

    if(count == 0)
    {
        printf("No Common Elements Found.\n");
    }
    else
    {
        printArray(intersection, count);
    }

    return 0;
}