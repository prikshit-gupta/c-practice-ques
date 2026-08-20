#include <stdio.h>

int main() {
	float radius, height;
	
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	printf("Enter height: ");
	scanf("%f", &height);
	
	float volume = 3.14 * radius * radius * height;
	
	printf("Volume of cylinder is: %.2f\n", volume);
	
	return 0;
}

