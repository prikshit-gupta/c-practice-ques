#include <stdio.h>

int main() {
	FILE *ptr;
	ptr = fopen("table.txt","w");

	int n = 10;

	for (int i=1; i<=10; i++) {
		fprintf(ptr, "%d\n", i*10);
	}

	return 0;
}

