//Write a program to find string length without strlen().

#include <stdio.h>

int main()
{
    char str[1000];

    printf("Enter your String: ");
    if(fgets(str, sizeof(str), stdin) == NULL)
    {
        fprintf(stderr,"Error: failed to read input.\n");
        return 1;
    }

    long long length = 0;

    while(str[length] != '\0' && str[length] != '\n')
    {length++;}

    if(length == 0)
    {
        fprintf(stderr, "Error: empty input string.\n");
        return 1;
    }
    
    printf("\nThe Length of the String is: %lld", length);

    return 0;
}