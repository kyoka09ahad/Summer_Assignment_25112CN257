// Write a program to check whether a number is palindrome.

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
 
 long num1 = num;
 while(num1 > 0)
 {
    r = num1 % 10;
    rnum = rnum*10 +r;
    num1 = num1/10;
 }

 
 if (rnum == num)
{ 
    printf("The number %ld is 'Palindrome'\n", num);
}

else
{
    printf("The number %ld is 'Not Palindrome'\n", num);
}

 return 0;

}