//Write a program to Find missing number in array.

#include <stdio.h>

void printArray(long long array[], long long n)
{
    for (long long i = 0; i < n; i++)
    {
        printf("%lld ", array[i]);
    }
    printf("\n");
}

long long missingNumber(long long array[], long long n, long long expectedSum)
{
    long long actualSum = 0;
    for (long long i = 0; i < n; i++)
    {
        actualSum += array[i];
    }

    return expectedSum - actualSum;
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
    for(long long i = 0; i < length; i++)
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

    long long expectedSum;

    printf("Enter the Expected Sum of the Array: ");
    if(scanf("%lld", &expectedSum) != 1)
    {
        printf("Invalid Sum.\n");
        return 0;
    }

    printf("The Missing Number in the Array is %lld\n", missingNumber(array, length, expectedSum));

    return 0;
}