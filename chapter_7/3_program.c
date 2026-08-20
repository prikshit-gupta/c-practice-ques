#include <stdio.h>

int main() {
	int arr[10];

	for (int i = 1; i <= 10; i++) {
		arr[i-1] = i * 5;
		printf("The value of 5 × %d = %d\n", i, arr[i-1]);
	}

	return 0;
}

