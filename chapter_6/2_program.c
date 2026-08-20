#include <stdio.h>


void add(int *var) {
	printf("Address of i in function: %d\n", var);
}

int main() {
	int i;
	
	printf("Address of i: %d\n", &i);
	add(&i);

	return 0;
}

