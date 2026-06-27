//Write a program to Create marksheet generation system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    int id;
    char name[50];
    float marks[5];
    float total;
    float average;
    char grade;
};

void calculateResult(struct Student *s) 
{
    s->total = 0;
    for (int i = 0; i < 5; i++) 
    {s->total += s->marks[i];}
    s->average = s->total / 5;

    if (s->average >= 90) s->grade = 'A';
    else if (s->average >= 75) s->grade = 'B';
    else if (s->average >= 60) s->grade = 'C';
    else if (s->average >= 40) s->grade = 'D';
    else s->grade = 'F';
}

void generateMarksheet(struct Student s) 
{
    printf("\n--- Marksheet ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    for (int i = 0; i < 5; i++) 
    {printf("Subject %d Marks: %.2f\n", i + 1, s.marks[i]);}

    printf("Total: %.2f\n", s.total);
    printf("Average: %.2f\n", s.average);
    printf("Grade: %c\n", s.grade);
    printf("-----------------\n");
}

int main() 
{
    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    getchar();

    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }

    calculateResult(&s);
    generateMarksheet(s);

    return 0;
}