#include <stdio.h>

int main() {
	int year;
	
	printf("Enter Year: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)) {
		printf("Year is leap Year\n");
	} else {
		printf("Year is not leap year\n");
	}

	return 0;
}

