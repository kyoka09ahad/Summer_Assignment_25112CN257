//Write a program to Check palindrome string.

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

    int isPalindrome = 1;
    size_t left = 0;
    size_t right = (length == 0) ? 0 : length - 1;
 
    while (left < right)
    {
        char a = (char)tolower((unsigned char)str[left]);
        char b = (char)tolower((unsigned char)str[right]);
 
        if (a != b)
        {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
 
    if (isPalindrome)
    printf("The string \"%s\" is a Palindrome.\n", str);

    else
    printf("The string \"%s\" is NOT a Palindrome.\n", str);
 
    return 0;
}