#include <stdio.h>

int main() {
	int num;
	
	printf("Enter Number: ");
	scanf("%d", &num);
	
	int result = num % 97;
	
	if (result == 0) {
		printf("Number is divisible by 97\n");
	} else {
		printf("Number is not divisible by 97\n");
	}

	return 0;
	}

