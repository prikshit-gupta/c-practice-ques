#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));

	int guess_num, rand_num = rand() % 1000 + 1, end = 0, guess_times = 0;

	printf("  ––– NUMBER GUESSING GAME –––\n");
        printf(" Guess Number Between 1 to 1000\n");

	do {
		printf("Guess Number: ");
        	scanf("%d", &guess_num);
		
		if (guess_num>rand_num) {
			printf("Lower number please\n");
		} else if (guess_num<rand_num) {
			printf("Higher number please\n");
		} else {
			end = 1;
		}
		guess_times++;
	} while (end == 0);
	8
	printf("You guessed the number in %d tries!\n", guess_times);

	return 0;
}

