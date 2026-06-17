//Write a program to Find common elements.

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

    long long common[length];

    long long count = 0;

    for(long long i = 0; i < length; i++)
    {
        int visited = 0;

        for(long long k = 0; k < i; k++)
        {
            if(array[i] == array[k])
            {
                visited = 1;
                break;
            }
        }

        if(visited)  continue;

        long long frequency = 1;

        for(long long j = i + 1; j < length; j++)
        {
            if(array[i] == array[j])
            {frequency++;}
        }

        if(frequency > 1)
        {common[count++] = array[i];}
    }

    if(count == 0)
    {printf("No common elements found.\n");}

    else
    {
        printf("The Common Elements in the Array are:\n");
        printArray(common, count);
    }
    
    return 0;
}