//Write a program to Create mini library system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Book 
{
    int id;
    char title[50];
    char author[50];
};

struct Book library[MAX];
int count = 0;

void addBook() 
{
    if (count >= MAX) 
    {
        printf("Library is full!\n");
        return;
    }
    printf("Enter Book ID: ");
    scanf("%d", &library[count].id);
    getchar();
    printf("Enter Book Title: ");
    fgets(library[count].title, sizeof(library[count].title), stdin);
    library[count].title[strcspn(library[count].title, "\n")] = '\0';
    printf("Enter Author Name: ");
    fgets(library[count].author, sizeof(library[count].author), stdin);
    library[count].author[strcspn(library[count].author, "\n")] = '\0';
    count++;
    printf("Book added successfully!\n");
}

void displayBooks() 
{
    if (count == 0) 
    {
        printf("No books in the library.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d | Title: %s | Author: %s\n",library[i].id, library[i].title, library[i].author);
    }
}

void searchBook() 
{
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) 
    {
        if (library[i].id == id) 
        {
            printf("Book Found: ID: %d | Title: %s | Author: %s\n",library[i].id, library[i].title, library[i].author);
            return;
        }
    }
    printf("Book not found.\n");
}

void deleteBook() 
{
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) 
    {
        if (library[i].id == id) 
        {
            for (int j = i; j < count - 1; j++) 
            {
                library[j] = library[j + 1];
            }
            count--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book not found.\n");
}

int main() 
{
    int choice;
    do {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}