#include <stdio.h>

int main() {
	int num, i=3, isPrime = 1;
	printf("Enter Number: ");
	scanf("%d", &num);

	while (isPrime == 0 && i<num-1) {
		if (num % i++ == 0) {
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

