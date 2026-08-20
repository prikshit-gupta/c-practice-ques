#include <stdio.h>

int main() {
	char str[] = "Hello";
	char ch = 'e';
	int result = 0;

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			result = 1;
			break;
		}
	i++;
	}

	if (result == 1){
		printf("TRUE");
	} else {
		printf("FALSE");
	}

	return 0;
}

