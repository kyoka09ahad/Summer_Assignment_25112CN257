//Write a program to Create number guessing game.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    printf("---------------------------------------------------------------------\n");
    printf("Random Number Guessing Game between 1 to 100.\n");
    printf("---------------------------------------------------------------------\n");

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0, guess;

    do
    {
        printf("\nGuess the Random Number: ");
        if(scanf("%d", &guess) != 1 || guess < 1 || guess > 100)
        {
            printf("Invalid Input.\n");
            return 1;
        }
        
        number_of_guesses++;

        if(guess > randomNumber)
        {printf(":'(  Lower Number Please!.\n");}

        else
        {printf(":'(  Higher Number Please!.\n");}
    } 
    while (guess != randomNumber);

    printf("\n:)  Congratulations! You Guessed the Number Correctly in %d Guesses.\n", number_of_guesses);

    return 0;
}