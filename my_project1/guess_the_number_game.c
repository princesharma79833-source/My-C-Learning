#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));                           // Seed for randomness
    int num = (rand() % 100) + 1;
    int guessed;
    int no_of_guesses = 0;

    // Random number between 1–100
    // printf("Random number: %d\n", num);
    printf("Guess the no. b|w 1 and 100:\n");

    do
    {
        
        scanf("%d", &guessed);
        no_of_guesses++;
        if (guessed > num)
        {
            printf("lower no:please\n");
        }
        else if (guessed < num)
        {
            printf("higher no:please\n");
        }
        else if (guessed == num)
        {
            printf(" congratulations!!  you guessed the no. correctly ");
        }
    } while (guessed != num);

    printf("You guessed the no. in %d attempts\n", no_of_guesses);

    return 0;
}
