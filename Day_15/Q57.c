//Write a program to reverse array.

#include <stdio.h>

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
for(i=0; i<length; i++)
{
    printf("%lld\t", array[i]);
}

printf("\n\n");

long long revarray[length];
for(i=0; i < length; i++)
{
    revarray[i] = array[i];
}

long long j = length-1;
for(i=0; i <= length/2; i++)
{
     revarray[i] = array[j];
     revarray[j] = array[i];
     j--;

     if(j < length/2)  {break;}
}

printf("The reversed array is:\n");
for(i=0; i<length; i++)
{
    printf("%lld\t", revarray[i]);
}

return 0;
}