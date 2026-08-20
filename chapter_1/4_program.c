#include <stdio.h>

int main() {
	float principal, rate_of_interest;
	int number_of_years;
	
	printf("Enter principal: ");
	scanf("%f", &principal);
	
	printf("Enter rate of interest: ");
	scanf("%f", &rate_of_interest);
	
	printf("Enter number of years: ");
	scanf("%d", &number_of_years);
	
	float interest = (principal * rate_of_interest * number_of_years) / 100.0;
	
	printf("Your Interest is: %.2f\n", interest);
	
	return 0;
}

