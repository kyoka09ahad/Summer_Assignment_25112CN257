//Write a program to Create menu-driven array operations system. 

#include <stdio.h>

#define MAX 100

void traverse(int arr[], int n) 
{
    if (n == 0) 
    {
        printf("\nArray is empty.\n");
        return;
    }
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) 
    {printf("%d ", arr[i]);}
    printf("\n");
}

void insert(int arr[], int *n, int pos, int val) 
{
    if (*n >= MAX) 
    {
        printf("\nArray is full. Cannot insert.\n");
        return;
    }
    if (pos < 0 || pos > *n) 
    {
        printf("\nInvalid position.\n");
        return;
    }
    for (int i = *n; i > pos; i--) 
    {arr[i] = arr[i - 1];}
    arr[pos] = val;
    (*n)++;
    printf("\nElement inserted successfully.\n");
}

void delete(int arr[], int *n, int pos) 
{
    if (*n == 0) 
    {
        printf("\nArray is empty. Cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= *n) 
    {
        printf("\nInvalid position.\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) 
    {arr[i] = arr[i + 1];}
    (*n)--;
    printf("\nElement deleted successfully.\n");
}

void search(int arr[], int n, int val) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == val) 
        {
            printf("\nElement %d found at position %d.\n", val, i);
            return;
        }
    }
    printf("\nElement %d not found.\n", val);
}

void update(int arr[], int n, int pos, int val) 
{
    if (pos < 0 || pos >= n) 
    {
        printf("\nInvalid position.\n");
        return;
    }
    arr[pos] = val;
    printf("\nElement updated successfully.\n");
}

int main() 
{
    int arr[MAX], n = 0, choice, pos, val;

    while (1) 
    {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Traverse\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Update\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                traverse(arr, n);
                break;
            case 2:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert(arr, &n, pos, val);
                break;
            case 3:
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &pos);
                delete(arr, &n, pos);
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &val);
                search(arr, n, val);
                break;
            case 5:
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &pos);
                printf("Enter new value: ");
                scanf("%d", &val);
                update(arr, n, pos, val);
                break;
            case 6:
                printf("\nExiting program...\n");
                return 0;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}