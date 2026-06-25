//Write a program to Sort names alphabetically. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *getSuffix(long long n)
{
    if (n % 100 >= 11 && n % 100 <= 13)
    {return "th";}

    switch (n % 10)
    {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}

int main()
{
    long long num;
    printf("Enter the Number of Names that have to be Sorted Alphabetically: ");
    if(scanf("%lld", &num) != 1)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    char nameList[num][1000];

    printf("\n");
    for(long long i = 0; i < num; i++)
    {
        printf("Enter the %lld%s Name: ", i+1, getSuffix(i+1));
        if (fgets(nameList, sizeof(nameList), stdin) == NULL || !isalpha(fgets(nameList, sizeof(nameList), stdin)))
        {
            fprintf(stderr,"Error: Please Input proper Names.\n");
            return 1;
        }
    }



}