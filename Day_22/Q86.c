//Write a program to Count words in a sentence.

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

    long long words = 0;
    int in_word = 0;
    for(size_t i = 0; i < length; i++)
    {
        if(!isalpha(str[i]) && !isspace(str[i]))
        {
            printf("Words must include Alphabets only.\n");
            return 0;
        }

        if(isspace((unsigned char)str[i]))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            words++;
        }
    }
    printf("The Number Words in the String is: %lld", words);

    return 0;
}