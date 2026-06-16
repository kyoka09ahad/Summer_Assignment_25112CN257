//Write a program to Move zeroes to end.

#include <stdio.h>

void moveZeroes(long long array[], long long n) 
{
    long long count = 0;

    for (int i = 0; i < n; i++) 
    {
        if (array[i] != 0) 
        {array[count++] = array[i];}
    }

    while (count < n) 
    {array[count++] = 0;}
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
long long length, i;

printf("Enter the length(size) of array: ");
if(scanf("%lld", &length) != 1 || length <= 0)
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

moveZeroes(array, length);

printf("The Array after moving zeroes to end is:\n");
printArray(array, length);
printf("\n");

return 0;
}