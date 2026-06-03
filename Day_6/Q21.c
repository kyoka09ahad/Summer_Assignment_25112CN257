//Write a program to convert decimal to binary.

#include <stdio.h>

int main()
{
    long long decimal;
    
    printf("Enter a whole number (Decimal values would be ignored if entered): ");
    
    if (scanf("%lld", &decimal) != 1 || decimal < 0)
    {
        printf("Invalid Input.\n");
        return 1;
    }

    if (decimal == 0)
    {
        printf("Binary equivalent is = 0\n");
        return 0;
    }

    int binary[64];
    int i = 0;

    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    printf("Binary equivalent is = ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}