#include <stdio.h>

int main(){
	char c;

	printf("Enter character: ");
	scanf("%c", &c);

	if (c >= 'A' && c <='Z') {
		printf("Character is Uppercase\n");
	} else if (c >= 'a' && c <= 'z') {
		printf("Character is Lowercase\n");
	} else {
		printf("Not an alphabetic letter\n");	
	}

	return 0;
}

