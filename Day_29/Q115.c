//Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringLength(char str[]) 
{printf("Length of string: %lu\n", strlen(str));}

void stringConcat(char str1[], char str2[]) 
{
    char result[200];
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);
}

void stringCompare(char str1[], char str2[]) 
{
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("String 1 is smaller than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");
}

void stringReverse(char str[]) 
{
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--)
    putchar(str[i]);
    printf("\n");
}

void stringSearch(char str[], char sub[]) 
{
    if (strstr(str, sub) != NULL)
        printf("Substring found!\n");
    else
        printf("Substring not found.\n");
}

int main() 
{
    char str1[100], str2[100];
    int choice;

    while (1) 
    {
        printf("\n--- String Operations Menu ---\n");
        printf("1. String Length\n");
        printf("2. String Concatenation\n");
        printf("3. String Comparison\n");
        printf("4. String Reverse\n");
        printf("5. Substring Search\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) 
        {
            case 1:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                stringLength(str1);
                break;

            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                stringConcat(str1, str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                stringCompare(str1, str2);
                break;

            case 4:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                stringReverse(str1);
                break;

            case 5:
                printf("Enter main string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter substring: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                stringSearch(str1, str2);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}