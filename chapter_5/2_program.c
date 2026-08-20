#include <stdio.h>

float feh(float cel) {
	return (cel * 1.8) + 32.0;
}

int main() {
        float celsius;

        printf("Enter value: ");
        scanf("%f", &celsius);
        
	printf("%.2f\n", feh(celsius));

        return 0;
}

