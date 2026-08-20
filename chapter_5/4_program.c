#include <stdio.h>

int fobs(int n){
	int f;

	if (n == 1) {
		return 0;
	} else if (n == 2) {
		return 1;
	} else {
		f = fobs(n - 2) + fobs(n - 1);
       	}
		return f;
}

int main() {
	int n;

	printf("Enter N: ");
	scanf("%d", &n);

	printf("%d\n", fobs(n));

	return 0;
}

