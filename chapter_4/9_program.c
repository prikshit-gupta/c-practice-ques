#include <stdio.h>

int main(){
	int i = 1, n;
	int j = 1;
	
	printf("Enter Number: ");
	scanf("%d", &n);
	
	while (i >= n) {
		j = i * j;
		i++;
	}

	printf("Factorial: %d\n", j);

        return 0;
}

