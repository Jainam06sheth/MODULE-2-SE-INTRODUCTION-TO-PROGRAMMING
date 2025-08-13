#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts, maxAttempts = 7;
    int min = 1, max = 100;
    char playAgain;

    srand(time(NULL));  // Seed random number generator

    do {
        secret = (rand() % (max - min + 1)) + min;
        attempts = 0;

        printf("\nWelcome to the Number Guessing Game!\n");
        printf("Guess the number between %d and %d. You have %d attempts.\n\n", min, max, maxAttempts);

        while (attempts < maxAttempts) {
            printf("Attempt %d: Enter your guess: ", attempts + 1);
            if (scanf("%d", &guess) != 1) {
                printf("Invalid input. Please enter a number.\n");
                return 1;
            }

            attempts++;

            if (guess < min || guess > max) {
                printf("Please guess a number between %d and %d.\n", min, max);
                continue;
            }

            if (guess == secret) {
                printf("?? Correct! You guessed the number in %d attempts.\n", attempts);
                break;
            } else {
                int diff = abs(secret - guess);
                if (guess < secret) {
                    if (diff > 20)
                        printf("Its too low!\n");
                    else
                        printf("Little bit low.\n");
                } else {
                    if (diff > 20)
                        printf("Its too high!\n");
                    else
                        printf("Little bit high.\n");
                }
            }
        }

        if (guess != secret) {
            printf("Out of attempts!", secret);
        }

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}

