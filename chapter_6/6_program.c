#include <stdio.h> 

int main() {
	int i;
	 
	int* ptr = &i;
	printf("Address of i: %d\n", &i);
	printf("Address of i of i: %d\n", &ptr);

	return 0;
}

