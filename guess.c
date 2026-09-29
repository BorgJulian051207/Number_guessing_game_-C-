#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret_number = 42;
    int guess;
    int attempts = 0;

    srand(time(NULL));
    secret_number = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");

do {
    printf("Enter your guess: ");
    scanf("%d", &guess);
    attempts++;
    
    if (guess < secret_number) {
        printf("Too low!\n");
    } else if (guess > secret_number) {
        printf("Too high!\n");
    } else {
        printf("Correct! You found the number in %d attempts.\n", attempts);
    }
} while (guess != secret_number); 
    
return 0;
}