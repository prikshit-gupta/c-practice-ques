#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        srand(time(0));

        int player, computer = rand() % 3;

	printf("Choose 0 for Snake, 1 for Water, 2 for Gun\nYou Choose: ");
	scanf("%d", &player);

	printf("Computer Choose: %d\n",computer);

	if ((player == 0 && computer ==1) || (player==1 && computer ==2) || (player== 2 && computer ==0)) {
		printf("You Win!\n");
	} else if ((player ==0&& computer==1)||(player==1&&computer == 0)||(player== 2&&computer==1)){
		printf("You Lose!\n");
	} else {
		printf("Its a Draw!\n");
	}

        return 0;
}

