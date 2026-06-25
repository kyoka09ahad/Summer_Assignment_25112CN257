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

int isValidName(char name[])
{
    int hasLetter = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == '\n')
            continue;

        if (isalpha((unsigned char)name[i]))
        {
            hasLetter = 1;
        }
        else if (name[i] == ' ')
        {
            continue;
        }
        else
        {
            return 0;
        }
    }

    return hasLetter;
}

int main()
{
    long long num;

    printf("Enter the Number of Names that have to be Sorted Alphabetically: ");

    if (scanf("%lld", &num) != 1 || num <= 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    getchar(); 

    char nameList[num][1000];
    char temp[1000];

    printf("\n");

    for (long long i = 0; i < num; i++)
    {
        printf("Enter the %lld%s Name: ", i + 1, getSuffix(i + 1));

        if (fgets(nameList[i], sizeof(nameList[i]), stdin) == NULL)
        {
            printf("Error reading input.\n");
            return 1;
        }

        nameList[i][strcspn(nameList[i], "\n")] = '\0';

        if (!isValidName(nameList[i]))
        {
            printf("Error: Please enter a valid name.\n");
            return 1;
        }
    }

    for (long long i = 0; i < num - 1; i++)
    {
        for (long long j = 0; j < num - i - 1; j++)
        {
            if (strcmp(nameList[j], nameList[j + 1]) > 0)
            {
                strcpy(temp, nameList[j]);
                strcpy(nameList[j], nameList[j + 1]);
                strcpy(nameList[j + 1], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");

    for (long long i = 0; i < num; i++)
    {printf("%s\n", nameList[i]);}

    return 0;
}