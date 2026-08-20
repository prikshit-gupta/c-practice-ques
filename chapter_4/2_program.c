#include <stdio.h>

int main() {
	int num, i;

	printf("Enter Number: ");
	scanf("%d", &num);

	for (i=10; i >= 0; i--){
		printf("%d × %d = %d\n", i, num, i * num);
	}

	return 0;
}

