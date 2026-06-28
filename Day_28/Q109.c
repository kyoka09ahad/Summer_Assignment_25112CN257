//Write a program to Create library management system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book 
{
    int id;
    char title[100];
    char author[100];
    int available;
};

void addBook(struct Book books[], int *count) 
{
    printf("\nEnter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar();

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0';

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';

    books[*count].available = 1;
    (*count)++;
    printf("\nBook added successfully!\n");
}

void displayBooks(struct Book books[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo books found.\n");
        return;
    }
    printf("\n--- Library Books ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d\nTitle: %s\nAuthor: %s\nStatus: %s\n\n",
        books[i].id, books[i].title, books[i].author,
        books[i].available ? "Available" : "Issued");
    }
}

void searchBook(struct Book books[], int count) 
{
    int id;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (books[i].id == id) 
        {
            printf("\nBook Found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nStatus: %s\n",
            books[i].id, books[i].title, books[i].author,
            books[i].available ? "Available" : "Issued");
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", id);
}

void issueBook(struct Book books[], int count) 
{
    int id;
    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (books[i].id == id) {
            if (books[i].available) 
            {
                books[i].available = 0;
                printf("\nBook issued successfully!\n");
            } 
            else {printf("\nBook is already issued.\n");}
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", id);
}

void returnBook(struct Book books[], int count) 
{
    int id;
    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (books[i].id == id) 
        {
            if (!books[i].available) 
            {
                books[i].available = 1;
                printf("\nBook returned successfully!\n");
            } 
            else {printf("\nBook was not issued.\n");}
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", id);
}

void deleteBook(struct Book books[], int *count) 
{
    int id;
    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) 
    {
        if (books[i].id == id) 
        {
            for (int j = i; j < *count - 1; j++) 
            {books[j] = books[j + 1];}
            (*count)--;
            printf("\nBook deleted successfully!\n");
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", id);
}

int main() 
{
    struct Book books[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addBook(books, &count); break;
            case 2: displayBooks(books, count); break;
            case 3: searchBook(books, count); break;
            case 4: issueBook(books, count); break;
            case 5: returnBook(books, count); break;
            case 6: deleteBook(books, &count); break;
            case 7: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}