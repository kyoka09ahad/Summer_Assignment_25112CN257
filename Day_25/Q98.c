//Write a program to Find common characters in strings.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
 
    printf("Enter a String: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        printf("Input Error.\n");
        return 1;
    }
    printf("\n");

    size_t length = strlen(str);
    while (length > 0 && (str[length - 1] == '\n' || str[length - 1] == '\r'))
    {str[--length] = '\0';}
    
    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(!isspace((unsigned char)str[i]))
        {freq[(unsigned char)str[i]]++;}
    }

    int found = 0;

    printf("\nThe Common Characters are:\n");

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 1)
        {
            printf("%c ", i);
            found = 1;
        }
    }

    if(!found)
    {printf("None");}

    printf("\n");

    return 0;
}