//Write a program to Remove duplicate characters.

//Write a program to Find first repeating character.

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

    long long count = 0;
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

        long long frequency = 1;

        for(long long j = i + 1; j < length; j++)
        {
            if(str[i] == str[j])
            {frequency++;}
        }
        
        if(frequency > 1)
        {
            count++;
            continue;
        }

    }

    return 0;
}