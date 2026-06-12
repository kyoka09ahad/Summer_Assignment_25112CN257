//Write a program to write function for perfect number.

#include <stdio.h>

int isPerfect(int n) 
{
    if (n <= 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            sum += i;
            if (i != n / i)
            sum += n / i;
        }
    }
    return sum == n;
}

int main() 
{
    printf("Perfect numbers up to 10000:\n");
    for (int i = 2; i <= 10000; i++) 
    {
        if (isPerfect(i))
        printf("%d\n", i);
    }
    return 0;
}