//Write a program to Check string rotation.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerStr(char *dest, const char *src)
{
    size_t i;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = (char)tolower((unsigned char)src[i]);
    }
    dest[i] = '\0';
}

int isRotation(const char *s1, const char *s2)
{
    size_t length1 = strlen(s1);
    size_t length2 = strlen(s2);

    if (length1 != length2)
    {
        return 0;
    }
    if (length1 == 0)
    {
        return 1;
    }

    char lower1[1000], lower2[1000], doubled[2000];

    toLowerStr(lower1, s1);
    toLowerStr(lower2, s2);

    strcpy(doubled, lower1);
    strcat(doubled, lower1);

    return (strstr(doubled, lower2) != NULL);
}

int main()
{
    char str1[1000], str2[1000];

    printf("To check the Rotation of a String, enter a Reference String for Comparison.\n");

    printf("\nEnter the Reference String: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }
    size_t length1 = strlen(str1);
    while (length1 > 0 && (str1[length1 - 1] == '\n' || str1[length1 - 1] == '\r'))
    {str1[--length1] = '\0';}

    printf("Enter the Rotated String: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }
    size_t length2 = strlen(str2);
    while (length2 > 0 && (str2[length2 - 1] == '\n' || str2[length2 - 1] == '\r'))
    {str2[--length2] = '\0';}

    if (isRotation(str1, str2))
    {printf("\nThe String \"%s\" is a Rotation of the String \"%s\".\n", str2, str1);}

    else
    {printf("\nThe String \"%s\" is NOT a Rotation of the String \"%s\".\n", str2, str1);}

    return 0;
}