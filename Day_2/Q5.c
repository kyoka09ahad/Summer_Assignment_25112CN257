//Write a program to find sum of digits of a number.

#include <stdio.h>

int main ()
{
 long num, r, sumD = 0;

 printf("Enter a number: ");
 if( scanf("%ld",&num) != 1)
 {
    printf("Invalid Input:'Enter Numbers only'\n");
    return 1;
 }

 r = (num < 0) ? -num : num;

 if(r == 0)
 {
    printf("The sum of digits of the number 0 = 0\n");
    return 0;
 }

 while(r > 0)
 {
    sumD += r % 10;
    r /= 10;
 }

 printf("The sum of digits of the number %ld = %ld\n", num, sumD);

 return 0;
}