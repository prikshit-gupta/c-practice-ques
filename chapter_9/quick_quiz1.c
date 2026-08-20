#include <stdio.h>

struct employee
{
	int code;
	float salary;
	char name[34];
};

int main() {
	struct employee e1;

	printf("Enter Employee Code: ");
	scanf("%d", &e1.code);

	printf("Enter Employee Salary: ");
	scanf("%f", &e1.salary);

	printf("Enter Employee Name: ");
	scanf("%s", &e1.name);
	
	printf("\nEmployee Code: %d\n", e1.code);
	printf("Employee Salary: %.2f\n", e1.salary);
	printf("Employee Name: %s\n", e1.name);

	return 0;
}

