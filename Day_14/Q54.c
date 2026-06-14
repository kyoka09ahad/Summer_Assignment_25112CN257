//Write a program to find Frequency of an element.

#include <stdio.h>

int main()
{
long length, i, frequency = 0;

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

printf("Enter the Element to check its Frequency in the Array: ");
scanf("%lld", &key);

for(i=0; i < length; i++)
{
    if(nums[i] == key)
    {frequency++;}
}

if(frequency == 0)
{
    printf("The Element does not belong to the Array.\n");
    return 1;
}

printf("The Frequency of the Element %lld in the Array is: %ld\n", key, frequency);

return 0;
}