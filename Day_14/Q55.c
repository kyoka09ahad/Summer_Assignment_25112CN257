//Write a program to find Second Largest element.

#include <stdio.h>

int main()
{
long length, i;

printf("Enter the length of array: ");
if(scanf("%ld", &length) != 1 || length <= 0)
{
    printf("Invalid Input.\n");
    return 1;
}

long long array[length];
printf("Input the Elements into the Array:\n");
for(i=0; i<length; i++)
{
    printf("Enter the %ld%s element: ",i+1, (i+1<=3) ? ((i+1==1) ? "st" : ((i+1==2) ? "nd" : "rd")) :"th");
    if(scanf("%lld", &array[i]) != 1)
    {
        printf("Invalid Input.\n");
        return 1;
    }
    printf("\n");
}

 long long largest, secondLargest;

    if (array[0] > array[1])
    {
        largest = array[0];
        secondLargest = array[1];
    }
    else
    {
        largest = array[1];
        secondLargest = array[0];
    }

    for (i = 2; i < length; i++)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    if (largest == secondLargest)
    {
        printf("No second largest element exists.\n");
    }
    else
    {
        printf("Largest element = %lld\n", largest);
        printf("Second largest element = %lld\n", secondLargest);
    }

    return 0;
}