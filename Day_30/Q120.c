//Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void yourchoice(int n)
{
    if(n == 0)
    printf("You chose: Snake\n");

    else if(n == 1)
    printf("You chose: Water\n");

    else
    printf("You chose: Gun\n");
}

void computerchoice(int n)
{
    if(n == 0)
    printf("Computer chose: Snake\n");

    else if(n == 1)
    printf("Computer chose: Water\n");

    else
    printf("Computer chose: Gun\n");
}

int main()
{
    srand(time(0));
    int player, computer;
    int playerpoint = 0, computerpoint = 0;

    printf("\n----------------------------SNAKE, WATER, GUN----------------------------\n");

    do
    {
       computer = rand() % 3;

       printf("\nChoose 0 for Snake, 1 for water and 2 for Gun \n");
       if(scanf("%d", &player) != 1 || (player < 0 || player > 2))
       {
           printf("Invalid Input.\n");
           return 1;
       }

       yourchoice(player);
       computerchoice(computer);

       if (player == 0 && computer == 0)
       {
           printf("Its a Draw!\n");
           printf("Score: You-%d\tComputer-%d\n", playerpoint, computerpoint);
       }
       else if (player == 0 && computer == 1)
       {
           printf("You Win!\n");
           printf("Score: You-%d\tComputer-%d\n", ++playerpoint, computerpoint);
       }
       else if (player == 0 && computer == 2)
       {
           printf("You Lose!\n");
           printf("Score: You-%d\tComputer-%d\n", playerpoint, ++computerpoint);
       }
       else if (player == 1 && computer == 0)
       {
           printf("You Lose!\n");
           printf("Score: You-%d\tComputer-%d\n", playerpoint, ++computerpoint);
       }
       else if (player == 1 && computer == 1)
       {
           printf("Its a Draw!\n");
           printf("Score: You-%d\tComputer-%d\n", playerpoint, computerpoint);
       }
       else if (player == 1 && computer == 2)
       {
           printf("You win!\n");
           printf("Score: You-%d\tComputer-%d\n", ++playerpoint, computerpoint);
       }
       else if (player == 2 && computer == 0)
       {
           printf("You win!\n");
           printf("Score: You-%d\tComputer-%d\n", ++playerpoint, computerpoint);
       }
       else if (player == 2 && computer == 1)
       {
           printf("You Lose!\n");
           printf("Score: You-%d\tComputer-%d\n", playerpoint, ++computerpoint);
       }
       else if (player == 2 && computer == 2)
       {
           printf("Its a Draw!\n");
           printf("Score: You-%d\tComputer-%d\n", playerpoint, computerpoint);
       }
       else
       {
           printf("Something went wrong!");
       }
    }
    while(playerpoint != 5 && computerpoint != 5);   // FIX: != / && instead of == / ||

    if(playerpoint == 5)
    {
        printf("\nPlayer Won the Round.\n");
        return 0;
    }

    if(computerpoint == 5)
    {
        printf("\nComputer Won the Round.\n");
        return 0;
    }

    return 0;
}