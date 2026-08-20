#include <stdio.h>

int main() {
	float salary1, salary2;
	char name1[32], name2[32];
	
	printf("Enter Detais of First Employee\n");
	printf("Name: ");
	scanf("%s", name1);

	printf("Salary:	");
	scanf("%f", &salary1);

	printf("Enter Details of Second Ecomployee\n");
	printf("Name: ");
	scanf("%s", name2);
	
	printf("Salary: ");
	scanf("%f", &salary2);

	FILE *ptr;
	ptr = fopen("file5.txt", "w");
	fprintf(ptr,"%s, %.2f\n", name1, salary1);
	fprintf(ptr, "%s, %.2f\n", name2, salary2);

	fclose(ptr);
	return 0;
}

