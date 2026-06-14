//Write a program to Linear Search.

#include <stdio.h>

int linearsearch(long long array[], long size, long long target)
{
    for(long i=0; i < size; i++)
    {
        if(array[i] == target)
        {return i;}
    }
     return -1;
}

int main()
{
long length, i;

printf("Enter the length of array: ");
if(scanf("%ld", &length) != 1 || length <= 0)
{
    printf("Invalid Input.\n");
    return 1;
}

long long nums[length], key;
printf("Input the Elements into the Array:\n");
for(i=0; i<length; i++)
{
    printf("Enter the %ld%s element: ",i+1, (i+1<=3) ? ((i+1==1) ? "st" : ((i+1==2) ? "nd" : "rd")) :"th");
    if(scanf("%lld", &nums[i]) != 1)
    {
        printf("Invalid Input.\n");
        return 1;
    }
    printf("\n");
}

printf("Enter the Element that has to be Searched: ");
scanf("%lld", &key);

int result = linearsearch(nums, length, key);

if(result == -1)  
{printf("Element %lld was not found.\n", key);}

else  
{printf("Element %lld was found.\n", key);}

return 0;
}