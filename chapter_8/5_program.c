#include <stdio.h>
#include <string.h>

void kstrcpy(char str[], char source[]) {
	for (int i = 0; i <= strlen(source); i++) {
		str[i] = source[i]; 
}
}

int main() {
	char source[] = "Hello";
	char str[20];

	kstrcpy(str, source);
	printf("%s", str);
}

