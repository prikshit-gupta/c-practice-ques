#include <stdio.h>

int main() {
	int i, n;
	int j = 1;
	
	printf("Enter Number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		j = i * j;
	}

	printf("Factorial of Given Number: %d\n", j);

	return 0;
}

