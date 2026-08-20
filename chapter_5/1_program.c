#include <stdio.h>

float avgf(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3.0;
}

int main() {
	int num1, num2, num3;

	printf("Enter First No: ");
	scanf("%d", &num1);
	
	printf("Enter Second No:");
	scanf("%d", &num2);
	
	printf("Enter Second No:");
	scanf("%d", &num3);

	printf("Average: %.2f\n", avgf(num1, num2, num3));

	return 0;

}

