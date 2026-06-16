//Write a program to Find maximum frequency element.

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
    long long length;

    printf("Enter the length(size) of array: ");
    if(scanf("%lld", &length) != 1 || length <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    long long array[length];
    printf("Input the Elements into the Array:\n");
    for(long long i=0; i<length; i++)
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

    long long maxFreq = 0;

    for (long long i = 0; i < length; i++) 
    {
        long long count = 1;

        long long visited = 0;
        for (long long k = 0; k < i; k++) 
        {
            if (array[i] == array[k]) 
            {
                visited = 1;
                break;
            }
        }

        if (visited)  continue;

        for (long long j = i + 1; j < length; j++) 
        {
            if (array[i] == array[j])
            count++;
        }

        if (count > maxFreq)
        maxFreq = count;
    }

    if (maxFreq == 1)
    printf("No repeating element found.\n");

    else 
    {
        printf("Maximum Frequency = %lld\n", maxFreq);
        printf("Element(s): ");

        for (long long i = 0; i < length; i++) 
        {
            long long count = 1;

            long long visited = 0;
            for (long long k = 0; k < i; k++) 
            {
                if (array[i] == array[k]) 
                {
                    visited = 1;
                    break;
                }
            }

            if (visited)  continue;

            for (long long j = i + 1; j < length; j++) 
            {
                if (array[i] == array[j])
                count++;
            }

            if (count == maxFreq)  {printf("%lld ", array[i]);}
        }

        printf("\n");
    }

    return 0;
}