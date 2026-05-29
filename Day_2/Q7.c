//Write a program to find product of digits.

#include <stdio.h>

int main ()
{
 long num, r, prodD = 1;

 printf("Enter a number: ");
 if( scanf("%ld",&num) != 1)
 {
    printf("Invalid Input:'Enter Numbers only'\n");
    return 1;
 }

 r = (num < 0) ? -num : num;

 if(r == 0)
 {
    printf("The product of digits of the number 0 = 0\n");
    return 0;
 }

 while(r > 0)
 {
    prodD *= r % 10;
    r /= 10;
 }

 printf("The product of digits of the number %ld = %ld\n", num, prodD);

 return 0;
}