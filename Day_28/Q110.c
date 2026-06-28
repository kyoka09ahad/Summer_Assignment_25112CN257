//Write a program to Create bank account system.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BankAccount 
{
    int accountNumber;
    char name[50];
    float balance;
};

void createAccount(struct BankAccount accounts[], int *count) 
{
    printf("\nEnter Account Number: ");
    scanf("%d", &accounts[*count].accountNumber);
    getchar();

    printf("Enter Account Holder Name: ");
    fgets(accounts[*count].name, sizeof(accounts[*count].name), stdin);
    accounts[*count].name[strcspn(accounts[*count].name, "\n")] = '\0';

    accounts[*count].balance = 0.0;
    (*count)++;
    printf("\nAccount created successfully!\n");
}

void deposit(struct BankAccount accounts[], int count) 
{
    int accNum;
    float amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNum);

    for (int i = 0; i < count; i++) 
    {
        if (accounts[i].accountNumber == accNum) 
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("\nDeposit successful! New Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("\nAccount not found!\n");
}

void withdraw(struct BankAccount accounts[], int count) 
{
    int accNum;
    float amount;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNum);

    for (int i = 0; i < count; i++) 
    {
        if (accounts[i].accountNumber == accNum) 
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > accounts[i].balance) 
            {printf("\nInsufficient balance!\n");} 
            else 
            {
                accounts[i].balance -= amount;
                printf("\nWithdrawal successful! New Balance: %.2f\n", accounts[i].balance);
            }
            return;
        }
    }
    printf("\nAccount not found!\n");
}

void checkBalance(struct BankAccount accounts[], int count) 
{
    int accNum;
    printf("\nEnter Account Number: ");
    scanf("%d", &accNum);

    for (int i = 0; i < count; i++) 
    {
        if (accounts[i].accountNumber == accNum) 
        {
            printf("\nAccount Holder: %s\nBalance: %.2f\n", accounts[i].name, accounts[i].balance);
            return;
        }
    }
    printf("\nAccount not found!\n");
}

void displayAccounts(struct BankAccount accounts[], int count) 
{
    if (count == 0) 
    {
        printf("\nNo accounts found.\n");
        return;
    }
    printf("\n--- Bank Accounts ---\n");
    for (int i = 0; i < count; i++) 
    {
        printf("Account Number: %d\nName: %s\nBalance: %.2f\n\n",
        accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
    }
}

int main() 
{
    struct BankAccount accounts[100];
    int count = 0;
    int choice;

    while (1) 
    {
        printf("\n--- Bank Account Management System ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: createAccount(accounts, &count); break;
            case 2: deposit(accounts, count); break;
            case 3: withdraw(accounts, count); break;
            case 4: checkBalance(accounts, count); break;
            case 5: displayAccounts(accounts, count); break;
            case 6: exit(0);
            default: printf("\nInvalid choice! Try again.\n");
        }
    }
    return 0;
}