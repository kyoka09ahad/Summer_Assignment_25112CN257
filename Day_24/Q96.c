//Write a program to Remove duplicate characters.

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    int i, j, k;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    for (i = 0; str[i] != '\0'; i++) 
    {
        for (j = i + 1; str[j] != '\0'; ) 
        {
            if (str[i] == str[j]) 
            {
                for (k = j; str[k] != '\0'; k++) 
                {str[k] = str[k + 1];}
            } 
            else 
            {j++;}
        }
    }

    printf("String after removing duplicates: %s\n", str);

    return 0;
}