#include <stdio.h>

int main() {
	char str[] = "Hello";
	char ch = 'e';
	
	int j = 0;
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			j++;
		}
		i++;
	}

	printf("Occurrence of %c in %s: %i times", ch, str, j);
	return 0;
}


