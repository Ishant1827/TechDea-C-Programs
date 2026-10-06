#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    // Seed the random number generator using the current time.
    srand((unsigned int)time(NULL));
    secret = rand() % 100 + 1;

    printf("Guess a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
            printf("Too low!\n");
        else if (guess > secret)
            printf("Too high!\n");
        else
            printf("Correct! Attempts = %d\n", attempts);

    } while (guess != secret);

    return 0;
}
