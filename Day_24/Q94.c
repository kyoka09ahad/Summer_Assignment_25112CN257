//Write a program to Compress a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[1000];
    char compressed[1000];
    int count;
    int j = 0;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    int length = strlen(str);
    for (int i = 0; i < length; i++) 
    {
        count = 1;
        while (i + 1 < length && str[i] == str[i + 1]) 
        {
            count++;
            i++;
        }

        if(isspace(str[i]))  {continue;}

        compressed[j] = str[i];
        j++;

        compressed[j] = count + '0';
        j++;
    }

    compressed[j] = '\0';

    printf("\nOriginal string : %s\n", str);
    printf("Compressed string: %s\n", compressed);

    return 0;
}