#include <stdio.h>

int strlen(char str[]) {
	int i = 0;
	
	while (str[i] != '\0') {
		i++;
	}

	return i;
}

int main() {
	char str[] = "Hello";
	int len = strlen(str);

	printf("Length of str: %d", len);
	return 0;
}

