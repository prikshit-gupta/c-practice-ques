#include <stdio.h>

int main() {
	char text= "Hello";

	int i = 0;
	while(text[i] != '\0') {
		text[i] = text[i]+1;
		i++;
	}
		
	printf("Encrypted Text: %s", text);
	return 0;
}

