//Write a program to Count vowels and consonants.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];

    printf("Enter your String: ");
    if(fgets(str, sizeof(str), stdin) == NULL)
    {
        fprintf(stderr,"Error: failed to read input.\n");
        return 1;
    }

    long long length = strlen(str);

    if(length == 0)
    {
        fprintf(stderr,"Error: input string is empty.\n");
        return 1;
    }

    long long vowels = 0, consonants = 0;

    for(long long i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {vowels++;}

            else
            {consonants++;}
        }     
    }

    printf("\nThe Number of Vowels are: %lld", vowels);
    printf("\nThe Number of Consonants are: %lld", consonants);

    return 0;
}