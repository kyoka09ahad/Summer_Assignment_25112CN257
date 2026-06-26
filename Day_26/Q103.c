//Write a program to Create ATM simulation.

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char account[50];
    char pin[10];
    char correctAccount[] = "abdul123@atm";
    char correctPin[] = "1234";

    srand(time(0));
    int balance = (rand() % 10000) + 1, amount;
    int choice;

    printf("=============================ATM MENU===========================================\n");
    printf("=====================WELCOME TO YCYC BANK=======================================\n");

    printf("Enter Account Number: ");
    scanf("%49s", account);

    int len = strlen(account);

    if (len < 5 || strcmp(account + len - 5, "@ycyc") != 0)
    {
        printf("Invalid Account Number!\n");
        printf("Account number must end with '@ycyc'.\n");
        return 1;
    }

    printf("Enter PIN: ");
    scanf("%9s", pin);

    if (strcmp(account, correctAccount) != 0 || strcmp(pin, correctPin) != 0)
    {
        printf("Invalid Account Number or PIN.\n");
        return 1;
    }

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else
                {
                    balance += amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                    printf("Updated Balance: ₹%.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient Balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                    printf("Remaining Balance: ₹%.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 4);

    return 0;
}