#include <stdio.h>

int main() {
	int num;
	FILE *ptr;
	ptr = fopen("file6.txt", "r");
	fscanf(ptr, "%d", &num);
	ptr = fopen("file6.txt", "w");
	fprintf(ptr, "%d", 2*num);

	fclose(ptr);

	return 0;
}

