//Write a program to Binary Search.

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

int binarySearch(long long arr[], int n, long long target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {return mid;}
        
        else if (arr[mid] < target)
        {start = mid + 1;}

        else
        {end = mid - 1;}
    }

    return -1; 
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

    printf("\nFor Binary Search the Array has to be Sorted.\n");

    for(long long i = 0; i < length; i++)
    {
        for(long long j = 0; j < length-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                long long temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }

        }
    }
    printf("The Sorted Array is:\n");
    printArray(array, length);

    long long key;
    printf("Enetr the Element to search in the Array: ");
    if(scanf("%lld", &key) != 1)
    {
        printf("Invalid Input.\n");
        return 1;
    }

     int index = binarySearch(array, length, key);

    if (index != -1)
    {printf("Element found at index %d.\n", index);}

    else
    {printf("Element not found.\n");}

    return 0;
}