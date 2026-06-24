//Write a program to Find longest word.

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

    size_t length = strlen(str);
    while (length > 0 && (str[length - 1] == '\n' || str[length - 1] == '\r'))
    {str[--length] = '\0';}

    char longestWord[1000] = "";
    char currentWord[1000] = "";
    size_t currentLen = 0;
    size_t maxLen = 0;

    for (size_t i = 0; i <= length; i++)
    {
        if (i < length && isalpha((unsigned char)str[i]))
        {
            currentWord[currentLen++] = str[i];
            continue;
        }

        if (i < length && !isspace((unsigned char)str[i]))
        {
            printf("Words must include alphabets only.\n");
            return 0;
        }

        if (currentLen > 0)
        {
            currentWord[currentLen] = '\0';
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                strcpy(longestWord, currentWord);
            }
            currentLen = 0;
        }
    }

    if (maxLen == 0)
    printf("\nNo words found in the string.\n");
    
    else
    printf("\nThe Longest Word in the String is: %s\n", longestWord);

    return 0;
}