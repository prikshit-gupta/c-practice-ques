#include <stdio.h>

int main() {
	int a = 10;

	printf("Address of Variable a: %d\n", &a);
	printf("Value of Variable a: %d", *(&a));

	return 0;
}

