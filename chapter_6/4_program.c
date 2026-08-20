#include <stdio.h>

float* avgf(int* num1, int* num2) {
	float avg = (*num1 + *num2) / 2.0;
	float* ptr = &avg;
	return ptr;
}

int main() {
	int num1, num2;

	printf("Enter First Number: ");
	scanf("%d", &num1);

	printf("Enter Second Number: ");
	scanf("%d", &num2);

	float* ptr = avgf(&num1, &num2);

	printf("Average: %.2f", *ptr);

	return 0;
}

