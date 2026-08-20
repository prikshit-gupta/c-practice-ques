#include <stdio.h>

struct vector
{
	int a;
	int b;
};

int main() {
	struct vector V;

	printf("Enter Value of i component: ");
	scanf("%d", &V.a);

	printf("Enter Value of j component: ");
	scanf("%d", &V.b);

	printf("\nVector: %di + %dj", V.a, V.b);
	return 0;
}

