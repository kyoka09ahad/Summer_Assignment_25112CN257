//Write a program to Find maximum occurring character.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
 
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }
    printf("\n");

    size_t length = strlen(str);
    while (length > 0 && (str[length - 1] == '\n' || str[length - 1] == '\r'))
    {str[--length] = '\0';}

    long long maxFrequency = 0;
    for(long long i = 0; i < length; i++)
    {
        int visited = 0;

        for(long long k = 0; k < i; k++)
        {
            if(str[i] == str[k])
            {
                visited = 1;
                break;
            }
        }

        if(visited)  continue;

        if(isspace(str[i]))  continue;

        long long count = 1;

        for(long long j = i + 1; j < length; j++)
        {
            if(str[i] == str[j])
            {count++;}
        }

        if(count > maxFrequency)
        {maxFrequency = count;}
    }

    if(maxFrequency == 1)
    {
        printf("There are no Recurring Characters in the String.\n");
        return 0;
    }

    printf("The Maximum Frequency is: %lld", maxFrequency);

    for (long long i = 0; i < length; i++)
    {
        long long count = 1;

        long long visited = 0;
        for (long long k = 0; k < i; k++) 
        {
            if (str[i] == str[k]) 
            {
                visited = 1;
                break;
            }
        }

        if (visited)  continue;

        for (long long j = i + 1; j < length; j++) 
        {
            if (str[i] == str[j])
            count++;
        }

        if (count == maxFrequency)  
        {
            printf("\nThe Maximum Frequency Character is: %c", str[i]);
            return 0;
        }
    }
    return 0;
}