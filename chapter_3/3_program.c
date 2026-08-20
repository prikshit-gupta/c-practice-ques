#include <stdio.h>

int main() {
	float income, tax = 0.0;

	printf("Enter your income: ");
	scanf("%f", &income);

	if (income <= 250000) {
		printf("You are text-free\n");
	} else if (income > 250000 && income <= 500000) {
		tax = (income - 250000) * 0.05;
		printf("Your tax is: %.2f\n", tax );
	} else if (income > 500000 && income <= 1000000) {
		tax = 12500.0 + (income - 500000) * 0.20;
		printf("Your tax is: %.2f\n", tax);
	} else {
		tax = 112500.0 + (income - 1000000) * 0.30; 
		printf("Your tax is: %.2f\n", tax);
	}

	return 0;
}

