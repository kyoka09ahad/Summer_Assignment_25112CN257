//Write a program to count set bits in a number.

#include <stdio.h>

int countSetBits(int n) 
    {
    int count = 0;

    while (n) 
    {
        n = n & (n - 1);
        count++;
    }

    return count;
    }

    int main() 
    {
    int num;
    printf("Enter a whole number (Decimal values would be neglected if entered): ");
    if(scanf("%d", &num) != 1 || num > 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("Number of set bits: %d\n", countSetBits(num));

    return 0;
    }