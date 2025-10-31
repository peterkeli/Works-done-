/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));            // Seed for random number
    secret = rand() % 20 + 1;  // Random number between 1 and 20

    printf("Guess the number (1 to 20):\n");

    while (1) {
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it right in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}