#include <stdio.h>

float force(float m, float g) {
	return m * g;
}

float main() {
	float m, g;

	printf("Enter mass (kg): ");
	scanf("%f", &m);

	printf("Enter gravity (m/s^2: ");
	scanf("%f", &g);

	printf("Force: %.2f\n", force(m,g));

	return 0;
}

