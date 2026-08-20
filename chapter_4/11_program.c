#include <stdio.h>

int main() {
	int num, isPrime = 1;
	printf("Enter Number: ");
	scanf("%d", &num);

	for (int i = 2; i < num-1; i++){
		if (num % i == 0) {
			isPrime = 0;
			break;
		}
	}

	if (isPrime == 1){
		printf("No is Prime");
	}else{
		printf("No is Not Prime");
	}

	return 0;
}

