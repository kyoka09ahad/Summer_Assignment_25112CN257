//Write a program to Create inventory management system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item 
{
    int id;
    char name[50];
    int quantity;
    float price;
};

void addItem() 
{
    struct Item item;
    FILE *fp = fopen("inventory.dat", "ab");
    if (!fp) 
    {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Item ID: ");
    scanf("%d", &item.id);
    printf("Enter Item Name: ");
    scanf("%s", item.name);
    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter Price: ");
    scanf("%f", &item.price);

    fwrite(&item, sizeof(item), 1, fp);
    fclose(fp);
    printf("Item added successfully!\n");
}

void displayItems() 
{
    struct Item item;
    FILE *fp = fopen("inventory.dat", "rb");
    if (!fp) 
    {
        printf("No inventory found!\n");
        return;
    }
    printf("\n--- Inventory List ---\n");
    while (fread(&item, sizeof(item), 1, fp)) 
    {
        printf("ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",item.id, item.name, item.quantity, item.price);
    }
    fclose(fp);
}

void searchItem() 
{
    int id, found = 0;
    struct Item item;
    FILE *fp = fopen("inventory.dat", "rb");
    if (!fp) 
    {
        printf("No inventory found!\n");
        return;
    }
    printf("Enter Item ID to search: ");
    scanf("%d", &id);
    while (fread(&item, sizeof(item), 1, fp)) 
    {
        if (item.id == id) 
        {
            printf("Item Found: ID: %d | Name: %s | Quantity: %d | Price: %.2f\n",item.id, item.name, item.quantity, item.price);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("Item not found!\n");
    }
    fclose(fp);
}

void deleteItem() 
{
    int id, found = 0;
    struct Item item;
    FILE *fp = fopen("inventory.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (!fp || !temp) 
    {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Item ID to delete: ");
    scanf("%d", &id);
    while (fread(&item, sizeof(item), 1, fp)) 
    {
        if (item.id != id) 
        {fwrite(&item, sizeof(item), 1, temp);} 
        else  {found = 1;}
    }
    fclose(fp);
    fclose(temp);
    remove("inventory.dat");
    rename("temp.dat", "inventory.dat");
    if (found) 
    {printf("Item deleted successfully!\n");} 
    else  {printf("Item not found!\n");}
}

int main() 
{
    int choice;
    while (1) 
    {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Delete Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: deleteItem(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}