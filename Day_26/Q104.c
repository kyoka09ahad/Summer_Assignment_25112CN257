//Write a program to Create quiz application.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char answer;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("A. Mumbai\nB. New Delhi\nC. Delhi\nD. Kolkata\n");
    printf("Enter your answer: ");
    if(!isalpha(scanf(" %c", &answer)))
    {
        printf("Please Enter the Correct Alphabet of Choices.\n");
        return 1;
    }

    if (toupper(answer) == 'B')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is B. New Delhi\n\n");
    }

    printf("Q2. How many Nations are hosting the 2026 FIFA World Cup?\n");
    printf("A. 2\nB. 4\nC. 3\nD. 1\n");
    printf("Enter your answer: ");
    if(!isalpha(scanf(" %c", &answer)))
    {
        printf("Please Enter the Correct Alphabet of Choices.\n");
        return 1;
    }

    if (toupper(answer) == 'C')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C. 3\n\n");
    }

    printf("Q3. Which Nation has won the 2022 FIFA World Cup?\n");
    printf("A. France\nB. Argentina\nC. Netherlands\nD. Portugal\n");
    printf("Enter your answer: ");
    if(!isalpha(scanf(" %c", &answer)))
    {
        printf("Please Enter the Correct Alphabet of Choices.\n");
        return 1;
    }

    if (toupper(answer) == 'B')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is B. Argentina\n\n");
    }

    printf("Q4. Which Football Club has defended their UCL Trophy in 2026?\n");
    printf("A. PSG\nB. Bayern Munich\nC. Arsenal\nD. FC Barcelona\n");
    printf("Enter your answer: ");
    if(!isalpha(scanf(" %c", &answer)))
    {
        printf("Please Enter the Correct Alphabet of Choices.\n");
        return 1;
    }

    if (toupper(answer) == 'A')
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is A. PSG\n\n");
    }

    printf("Q5. Which keyword is used to return a value from a function?\n");
    printf("A. break\nB. continue\nC. return\nD. exit\n");
    printf("Enter your answer: ");
    if(!isalpha(scanf(" %c", &answer)))
    {
        printf("Please Enter the Correct Alphabet of Choices.\n");
        return 1;
    }

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