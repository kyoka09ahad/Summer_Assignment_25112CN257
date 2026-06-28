//Write a program to Create ticket booking system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ticket 
{
    int id;
    char name[50];
    char event[50];
    int seats;
};

void bookTicket(struct Ticket tickets[], int *count) 
{
    printf("\nEnter Ticket ID: ");
    scanf("%d", &tickets[*count].id);
    getchar();

    printf("Enter Name: ");
    fgets(tickets[*count].name, sizeof(tickets[*count].name), stdin);
    tickets[*count].name[strcspn(tickets[*count].name, "\n")] = '\0';

    printf("Enter Event Name: ");
    fgets(tickets[*count].event, sizeof(tickets[*count].event), stdin);
    tickets[*count].event[strcspn(tickets[*count].event, "\n")] = '\0';

    printf("Enter Number of Seats: ");
    scanf("%d", &tickets[*count].seats);

    (*count)++;
    printf("\nTicket booked successfully!\n");
}

void displayTickets(struct Ticket tickets[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo tickets booked yet.\n");
        return;
    }
    printf("\n--- Ticket Bookings ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d\nName: %s\nEvent: %s\nSeats: %d\n\n",
        tickets[i].id, tickets[i].name, tickets[i].event, tickets[i].seats);
    }
}

void searchTicket(struct Ticket tickets[], int count) 
{
    int id;
    printf("\nEnter Ticket ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (tickets[i].id == id) 
        {
            printf("\nTicket Found:\n");
            printf("ID: %d\nName: %s\nEvent: %s\nSeats: %d\n",
            tickets[i].id, tickets[i].name, tickets[i].event, tickets[i].seats);
            return;
        }
    }
    printf("\nTicket with ID %d not found.\n", id);
}

void cancelTicket(struct Ticket tickets[], int *count) 
{
    int id;
    printf("\nEnter Ticket ID to cancel: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) 
    {
        if (tickets[i].id == id) 
        {
            for (int j = i; j < *count - 1; j++) 
            {tickets[j] = tickets[j + 1];}
            (*count)--;
            printf("\nTicket cancelled successfully!\n");
            return;
        }
    }
    printf("\nTicket with ID %d not found.\n", id);
}

int main() 
{
    struct Ticket tickets[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Ticket Booking System ---\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: bookTicket(tickets, &count); break;
            case 2: displayTickets(tickets, count); break;
            case 3: searchTicket(tickets, count); break;
            case 4: cancelTicket(tickets, &count); break;
            case 5: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}