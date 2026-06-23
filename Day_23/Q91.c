//Write a program to Check anagram strings.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf("To Check whether the Two Strings are Anagram of each other.");
    printf("\nHere, we ignore Spaces and Punctuation.\n");
    
    char str1[1000], str2[1000];
    
    printf("\nEnter the First String: ");
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

    int counts[256] = {0};
    for (int i = 0; i < length1; i++) 
    {
        if (isalnum((unsigned char)str1[i]))
        {counts[tolower((unsigned char)str1[i])]++;}
    }
 
    for (int i = 0; i < length2; i++) 
    {
        if (isalnum((unsigned char)str2[i]))
        {counts[tolower((unsigned char)str2[i])]--;}
    }
 
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) 
    {
        if (counts[i] != 0) 
        {
            isAnagram = 0;
            break;
        }
    }
 
    if (isAnagram)
    printf("\nThe two strings ARE Anagrams of each other.\n");
    else
    printf("\nThe two strings are NOT Anagrams of each other.\n");
 
    return 0;   
}