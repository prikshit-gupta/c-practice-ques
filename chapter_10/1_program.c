#include <stdio.h>

int main() {
	int num1, num2, num3;
	FILE *ptr;
	ptr = fopen("file2.txt", "r");
	fscanf(ptr, "%d %d %d", &num1, &num2, &num3);

	printf("%d %d %d", num1, num2, num3);
	return 0;
}

