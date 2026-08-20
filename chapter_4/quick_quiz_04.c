#include <stdio.h>

int main() {
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	for (; num>= 0; num--){
		printf("%d\n", num);
	}

	return 0;

}

