//Write a program to Create employee management system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    int age;
    char role[50];
    float salary;
};

void addEmployees(struct Employee employees[], int *count) 
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &employees[*count].id);
    getchar();

    printf("Enter Name: ");
    fgets(employees[*count].name, sizeof(employees[*count].name), stdin);
    employees[*count].name[strcspn(employees[*count].name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &employees[*count].age);
    getchar();

    printf("Enter Course: ");
    fgets(employees[*count].role, sizeof(employees[*count].role), stdin);
    employees[*count].role[strcspn(employees[*count].role, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &employees[*count].salary);

    (*count)++;
    printf("\nStudent record added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo student records found.\n");
        return;
    }
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nMarks: %.2f\n\n",
        employees[i].id, employees[i].name, employees[i].age,
        employees[i].role, employees[i].salary);
    }
}

void searchEmployees(struct Employee employees[], int count) 
{
    int id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nMarks: %.2f\n",
            employees[i].id, employees[i].name, employees[i].age,
            employees[i].role, employees[i].salary);
            return;
        }
    }
    printf("\nStudent with ID %d not found.\n", id);
}

void deleteEmployee(struct Employee employees[], int *count) 
{
    int id;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) 
    {
        if (employees[i].id == id) 
        {
            for (int j = i; j < *count - 1; j++) 
            {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("\nRecord deleted successfully!\n");
            return;
        }
    }
    printf("\nStudent with ID %d not found.\n", id);
}

int main() 
{
    struct Employee employees[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Employee Record Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Students\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addEmployees(employees, &count); break;
            case 2: displayEmployees(employees, count); break;
            case 3: searchEmployees(employees, count); break;
            case 4: deleteEmployee(employees, &count); break;
            case 5: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}