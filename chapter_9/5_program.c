#include <stdio.h>

struct Complex
{
	int real;
	int image;
};

int main() {
	struct Complex num1;

	printf("Enter Real Part: ");
	scanf("%d", &num1.real);

	printf("Enter Imagery Part: ");
	scanf("%d", &num1.image);

	printf("\nNumber: %d + %di", num1.real, num1.image);
	return 0;
}

