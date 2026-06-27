//Write a program to Create salary management system.

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
    getchar();

    printf("Enter Name: ");
    fgets(employees[*count].name, sizeof(employees[*count].name), stdin);
    employees[*count].name[strcspn(employees[*count].name, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(employees[*count].department, sizeof(employees[*count].department), stdin);
    employees[*count].department[strcspn(employees[*count].department, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &employees[*count].salary);

    (*count)++;
    printf("\nEmployee record added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo employee records found.\n");
        return;
    }
    printf("\n--- Employee Salary Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n\n",
               employees[i].id, employees[i].name,
               employees[i].department, employees[i].salary);
    }
}

void searchEmployee(struct Employee employees[], int count) {
    int id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n",
            employees[i].id, employees[i].name,
            employees[i].department, employees[i].salary);
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n", id);
}

void updateSalary(struct Employee employees[], int count) 
{
    int id;
    float newSalary;
    printf("\nEnter Employee ID to update salary: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (employees[i].id == id) 
        {
            printf("Enter new salary: ");
            scanf("%f", &newSalary);
            employees[i].salary = newSalary;
            printf("\nSalary updated successfully!\n");
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n", id);
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
            {employees[j] = employees[j + 1];}
            (*count)--;
            printf("\nRecord deleted successfully!\n");
            return;
        }
    }
    printf("\nEmployee with ID %d not found.\n", id);
}

int main() 
{
    struct Employee employees[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addEmployee(employees, &count); break;
            case 2: displayEmployees(employees, count); break;
            case 3: searchEmployee(employees, count); break;
            case 4: updateSalary(employees, count); break;
            case 5: deleteEmployee(employees, &count); break;
            case 6: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}