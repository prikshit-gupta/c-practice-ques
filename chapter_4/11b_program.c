#include <stdio.h>

int main() {
	int num, i = 2, isPrime = 1;
	printf("Enter Number: ");
	scanf("%d", &num);

	do {
		if (num % i++ == 0) {
			isPrime = 0;
			break;
		}
	}while(i < num-1);

	if (isPrime == 1){
		printf("No is Prime");
	}else{
		printf("No is Not Prime");
	}

	return 0;
}

