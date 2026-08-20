#include <stdio.h>
#include <string.h>

void kslice(char str[], int m, int n,char new_str[]) {
	int j = 0;
	for(int i = 0; i<=n ; i++) {
		if (i >= m && i <= n) {
			new_str[j++] = str[i]; 
		}
	}

	new_str[j] = '\0';
}

int main() {
	char str[] = "Hello";
	char new_str[5];
	kslice(str,1,3,new_str);
	
	printf("%s", new_str);
}

