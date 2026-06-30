//Write a program to Create mini employee management system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

void addEmployee(struct Employee employees[], int *count) 
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", employees[*count].name);
    printf("Enter Department: ");
    scanf(" %[^\n]", employees[*count].department);
    printf("Enter Salary: ");
    scanf("%f", &employees[*count].salary);
    (*count)++;
    printf("Employee added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count) {
    if (count == 0) 
    {
        printf("\nNo employees to display.\n");
        return;
    }
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void searchEmployee(struct Employee employees[], int count) 
{
    int id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("Employee Found: ID: %d | Name: %s | Department: %s | Salary: %.2f\n",employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
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
            printf("Employee deleted successfully!\n");
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

int main() 
{
    struct Employee employees[100];
    int count = 0, choice;

    while (1) 
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addEmployee(employees, &count); break;
            case 2: displayEmployees(employees, count); break;
            case 3: searchEmployee(employees, count); break;
            case 4: deleteEmployee(employees, &count); break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}