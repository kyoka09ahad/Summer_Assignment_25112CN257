//Write a program to write function for palindrome.

#include <stdio.h>

long long isPalindrome(long long n) 
{
    if (n < 0) return 0;

    long long original = n, reversed = 0;
    while (n > 0) 
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return reversed == original;
}

int main(void) 
{
    long long num;

    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) 
    {
        printf("Invalid Input.\n");
        return 1;
    }

    printf("%lld is%s a Palindrome.\n", num, isPalindrome(num) ? "" : " not");
    return 0;
}