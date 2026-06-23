//Write a program to Check anagram strings.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf("To Check whether the Two Strings are Anagram of each other.\n");
    
    char str1[1000], str2[1000];
    
    printf("Enter the First String: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }
    size_t length1 = strlen(str1);
    while (length1 > 0 && (str1[length1 - 1] == '\n' || str1[length1 - 1] == '\r'))
    {str1[--length1] = '\0';}
    printf("\n");

    printf("Enter the Second String: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }
    size_t length2 = strlen(str2);
    while (length2 > 0 && (str2[length2 - 1] == '\n' || str2[length2 - 1] == '\r'))
    {str2[--length2] = '\0';}
    printf("\n");

    if(length1 != length2)
    {
        fprintf(stderr,"Error: Both the Strings should have same Length.\n");
        return 1;
    }

    
}