//Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LEN 50

int main() 
{
    int num;
    char words[MAX_WORDS][MAX_LEN], temp[MAX_LEN];

    printf("Enter number of words: ");
    scanf("%d", &num);

    printf("Enter %d words:\n", num);
    for (int i = 0; i < num; i++) 
    {scanf("%s", words[i]);}

    for (int i = 0; i < num - 1; i++) 
    {
        for (int j = 0; j < num - i - 1; j++) 
        {
            if (strlen(words[j]) > strlen(words[j + 1])) 
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    
    for (int i = 0; i < num; i++) 
    {printf("%s\n", words[i]);}

    return 0;
}