//Write a program to Create student record system using arrays and strings.

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50

struct Student 
{
    int rollNo;
    char name[NAME_LEN];
    char course[NAME_LEN];
    int marks;
};

int main() 
{
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            if (count < MAX_STUDENTS) 
            {
                printf("Enter Roll No: ");
                scanf("%d", &students[count].rollNo);
                getchar();

                printf("Enter Name: ");
                fgets(students[count].name, NAME_LEN, stdin);
                students[count].name[strcspn(students[count].name, "\n")] = '\0';

                printf("Enter Course: ");
                fgets(students[count].course, NAME_LEN, stdin);
                students[count].course[strcspn(students[count].course, "\n")] = '\0';

                printf("Enter Marks: ");
                scanf("%d", &students[count].marks);

                count++;
                printf("Student added successfully!\n");
            } 
            else {printf("Record full! Cannot add more students.\n");}
        } 
        else if (choice == 2) 
        {
            printf("\n--- Student List ---\n");
            for (int i = 0; i < count; i++) 
            {
                printf("Roll No: %d\n", students[i].rollNo);
                printf("Name: %s\n", students[i].name);
                printf("Course: %s\n", students[i].course);
                printf("Marks: %d\n", students[i].marks);
                printf("----------------------\n");
            }
        } 
        else if (choice == 3) 
        {
            int roll;
            printf("Enter Roll No to search: ");
            scanf("%d", &roll);
            int found = 0;
            for (int i = 0; i < count; i++) 
            {
                if (students[i].rollNo == roll) 
                {
                    printf("\n--- Student Found ---\n");
                    printf("Roll No: %d\n", students[i].rollNo);
                    printf("Name: %s\n", students[i].name);
                    printf("Course: %s\n", students[i].course);
                    printf("Marks: %d\n", students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found) 
            {printf("No student found with Roll No %d\n", roll);}
        } 
        else if (choice == 4) 
        {printf("Exiting program...\n");}

        else 
        {printf("Invalid choice! Try again.\n");}

    } while (choice != 4);

    return 0;
}