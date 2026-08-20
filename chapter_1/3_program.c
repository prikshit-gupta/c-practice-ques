#include <stdio.h>

int main() {
	float celsius, fahrenheit;
	
	printf("Enter temperature in Celcius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 1.8) + 32;
	
	printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
	
	return 0;
}

