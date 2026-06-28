//Write a program to Create contact management system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact 
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

void addContact(struct Contact contacts[], int *count) 
{
    printf("\nEnter Contact ID: ");
    scanf("%d", &contacts[*count].id);
    getchar();

    printf("Enter Name: ");
    fgets(contacts[*count].name, sizeof(contacts[*count].name), stdin);
    contacts[*count].name[strcspn(contacts[*count].name, "\n")] = '\0';

    printf("Enter Phone: ");
    fgets(contacts[*count].phone, sizeof(contacts[*count].phone), stdin);
    contacts[*count].phone[strcspn(contacts[*count].phone, "\n")] = '\0';

    printf("Enter Email: ");
    fgets(contacts[*count].email, sizeof(contacts[*count].email), stdin);
    contacts[*count].email[strcspn(contacts[*count].email, "\n")] = '\0';

    (*count)++;
    printf("\nContact added successfully!\n");
}

void displayContacts(struct Contact contacts[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo contacts found.\n");
        return;
    }
    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d\nName: %s\nPhone: %s\nEmail: %s\n\n",
        contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

void searchContact(struct Contact contacts[], int count) 
{
    int id;
    printf("\nEnter Contact ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (contacts[i].id == id) 
        {
            printf("\nContact Found:\n");
            printf("ID: %d\nName: %s\nPhone: %s\nEmail: %s\n",
                   contacts[i].id, contacts[i].name, contacts[i].phone, contacts[i].email);
            return;
        }
    }
    printf("\nContact with ID %d not found.\n", id);
}

void deleteContact(struct Contact contacts[], int *count) 
{
    int id;
    printf("\nEnter Contact ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) 
    {
        if (contacts[i].id == id) 
        {
            for (int j = i; j < *count - 1; j++) 
            {contacts[j] = contacts[j + 1];}
            (*count)--;
            printf("\nContact deleted successfully!\n");
            return;
        }
    }
    printf("\nContact with ID %d not found.\n", id);
}

int main() 
{
    struct Contact contacts[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addContact(contacts, &count); break;
            case 2: displayContacts(contacts, count); break;
            case 3: searchContact(contacts, count); break;
            case 4: deleteContact(contacts, &count); break;
            case 5: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}