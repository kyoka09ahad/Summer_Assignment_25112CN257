//Write a program to reverse a number.

#include <stdio.h>

int main()
{
long num, r, rnum=0, negnum;

printf("Enter a number: ");
if( scanf("%ld",&num) != 1)
 {
    printf("Invalid Input:'Enter Numbers only'\n");
    return 1;
 }

 negnum = (num < 0);

 if(negnum)
 {num = -num;}
 
 while(num > 0)
 {
    r = num % 10;
    rnum = rnum*10 +r;
    num = num/10;
 }

 if(negnum)
 { rnum = -rnum; }

 printf("The reversed number is: %ld",rnum);

 return 0;

}