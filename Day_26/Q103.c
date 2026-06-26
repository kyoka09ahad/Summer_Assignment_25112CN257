//Write a program to Create ATM simulation.

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    char account[50];
    char pin[10];
    char correctAccount[] = "abdul123@ycyc";
    char correctPin[] = "4789";
    srand(time(0));
    long long balance = (rand() % 10000) + 1, amount;
    int choice;

    printf("=============================ATM MENU===========================================\n");
    printf("=====================WELCOME TO YCYC BANK=======================================\n");

    printf("\n//Your Memory: I remember Account Number is %s.//\n", correctAccount);
    printf("Enter Account Number: ");
    scanf("%s", account);

    int len = strlen(account);

    if (len < 5 || strcmp(account + len - 5, "@ycyc") != 0)
    {
        printf("Invalid Account Number!\n");
        printf("Account number must end with '@ycyc'.\n");
        return 1;
    }

    printf("\n//Your Memory: I remember pin is %s.//\n", correctPin);
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
        if(scanf("%d", &choice) != 1 || (choice <= 0 && choice > 4))
        {
            printf("\nINVALID Choice.\n");
            break;
        }

        switch (choice)
        {
            case 1:
            printf("Current Balance: %lldRs\n", balance);
            break;

            case 2:
            printf("Enter Amount to Deposit: ");
            scanf("%lld", &amount);

            if (amount >= 100000)
            {printf("Invalid Transaction (Maximum ATM Cash Limit).\n");}

            else
            {
                balance += amount;
                printf("%lldRs Deposited Successfully.\n", amount);
                printf("Updated Balance: %lldRs\n", balance);
            }
            break;

            case 3:
            printf("Enter Amount to Withdraw: ");
            scanf("%lld", &amount);

            if (amount <= 0)
            {printf("Invalid amount.\n");}

            else if (amount > balance)
            {printf("Insufficient Balance.\n");}

            else
            {
                balance -= amount;
                printf("%lldRs Withdrawn Successfully.\n", amount);
                printf("Remaining Balance: %lldRs\n", balance);
            }
            break;

            case 4:
            printf("Thank you for using the ATM.\n");
            break;

            default:
            printf("\nINVALID Choice.\n");
        }

    } 
    while (choice != 4);

    return 0;
}