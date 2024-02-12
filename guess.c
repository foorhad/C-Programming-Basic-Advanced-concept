#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int num, guess, tries = 0;
    // srand(time(0));
    num = rand() % 100 + 1;
    printf("Guess a number between 1 and 100: ");
    do {
            scanf("%d", &guess);
            tries++;
            if (guess > num) 
            {
                printf("Too high. Guess again: ");
            }
            else if (guess < num) 
            {
                printf("Too low. Guess again: ");
            }
      } while (guess != num);
    printf("Congratulations! You guessed the number in %d tries.\n",tries);
return 0;
}