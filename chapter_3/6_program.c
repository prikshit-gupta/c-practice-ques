#include <stdio.h>

int main() {
	int num1, num2, num3, num4;

	printf("Enter First Number: ");
	scanf("%d", &num1);
	printf("Enter Second Number: ");
	scanf("%d", &num2);
	printf("Enter Third  Number: ");
	scanf("%d", &num3);
	printf("Enter Fourth Number: ");
	scanf("%d", &num4);

	if (num1 > num2 && num1 > num3 && num1 > num4) {
		printf("Number First is greatest\n");
	} else if (num2 > num1 && num2 > num3 && num2 > num4) {
		printf("Number Second is greatest\n");
	} else if (num3 > num1 && num3 >num2 && num3 > num4) {
		printf("Number Third is greatest\n");
	} else {
     		printf("Number Fourth is greatest\n");
	}

	return 0;
}

