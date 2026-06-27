//Write a program to Create student record management system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    int id;
    char name[50];
    int age;
    char course[50];
    float marks;
};

void addStudent(struct Student students[], int *count) 
{
    printf("\nEnter Student ID: ");
    scanf("%d", &students[*count].id);
    getchar();

    printf("Enter Name: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &students[*count].age);
    getchar();

    printf("Enter Course: ");
    fgets(students[*count].course, sizeof(students[*count].course), stdin);
    students[*count].course[strcspn(students[*count].course, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;
    printf("\nStudent record added successfully!\n");
}

void displayStudents(struct Student students[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo student records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nMarks: %.2f\n\n",
        students[i].id, students[i].name, students[i].age,
        students[i].course, students[i].marks);
    }
}

void searchStudent(struct Student students[], int count) 
{
    int id;
    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) 
    {
        if (students[i].id == id) 
        {
            printf("\nRecord Found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nMarks: %.2f\n",
            students[i].id, students[i].name, students[i].age,
            students[i].course, students[i].marks);
            return;
        }
    }
    printf("\nStudent with ID %d not found.\n", id);
}

void deleteStudent(struct Student students[], int *count) 
{
    int id;
    printf("\nEnter Student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) 
    {
        if (students[i].id == id) 
        {
            for (int j = i; j < *count - 1; j++) 
            {
                students[j] = students[j + 1];
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
    struct Student students[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: deleteStudent(students, &count); break;
            case 5: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}