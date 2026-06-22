//Write a program to Remove spaces from string.

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
    char noSpaceStr[length];
    for(long long i = 0; i < length; i++)
    {
        if(!isspace(str[i]))
        { noSpaceStr[count++] = str[i]; }
    }

    printf("The String after removing the Spaces is: %s", noSpaceStr);

    return 0;
}