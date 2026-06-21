//Write a program to Reverse a string.

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

    char revstr[length];

    for(long long i = 0; i < length; i++)
    {revstr[i] = str[length -1 -i];}

    printf("\nThe Reversed String is: %s", revstr);

    return 0;
}