//Write a program to input and display array.

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

printf("The Input Array can be displayed as:\n");
for(i=0; i<length; i++)
{
    printf("%lld\t", array[i]);
}
return 0;
}