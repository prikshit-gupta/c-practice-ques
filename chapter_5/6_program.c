#include <stdio.h>

int sum(int n) {
	if (n == 1){
		return 1;
	}

	return sum(n - 1) + n;
}

int main(){
	int n;

	printf("Enter N: ");
	scanf("%d", &n);

	printf("%d\n", sum(n));

	return 0;

}

