//Write a program to Create quiz application.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char answer;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("A. Mumbai\nB. Delhi\nC. Chennai\nD. Kolkata\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (toupper(answer) == 'B')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is B. Delhi\n\n");
    }

    printf("Q2. Which language is known as the mother of many programming languages?\n");
    printf("A. Python\nB. Java\nC. C\nD. HTML\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (toupper(answer) == 'C')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C. C\n\n");
    }

    printf("Q3. How many days are there in a leap year?\n");
    printf("A. 364\nB. 365\nC. 366\nD. 367\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (toupper(answer) == 'C')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C. 366\n\n");
    }

    printf("Q4. Which symbol is used to end a statement in C?\n");
    printf("A. :\nB. ,\nC. ;\nD. .\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (toupper(answer) == 'C')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C. ;\n\n");
    }

    printf("Q5. Which keyword is used to return a value from a function?\n");
    printf("A. break\nB. continue\nC. return\nD. exit\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (toupper(answer) == 'C')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C. return\n\n");
    }

    printf("===== QUIZ COMPLETED =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
    printf("Excellent!\n");
    else if (score >= 3)
    printf("Good Job!\n");
    else
    printf("Keep Practicing!\n");

    return 0;
}