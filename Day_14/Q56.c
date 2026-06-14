//Write a program to find duplicates in array.

#include <stdio.h>

int main()
{
long length, i, j;

printf("Enter the length of array: ");
if(scanf("%ld", &length) != 1 || length <= 0)
{
    printf("Invalid Input.\n");
    return 1;
}

long long nums[length];
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

 int foundDuplicate = 0;

    for (i = 0; i < length; i++)
    {
        int alreadyProcessed = 0;

        for (j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                alreadyProcessed = 1;
                break;
            }
        }

        if (alreadyProcessed)
            continue;

        long frequency = 1;

        for (j = i + 1; j < length; j++)
        {
            if (nums[i] == nums[j])
            frequency++;
        }

        if (frequency > 1)
        {
            printf("Element %lld appears %ld times.\n",nums[i], frequency);

            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate)
    {printf("No duplicate elements found.\n");}

    return 0;
}