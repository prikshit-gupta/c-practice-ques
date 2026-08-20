#include <stdio.h>

int main() {
	int math_marks, com_marks, eco_marks;

	printf("Enter Your Math Marks: ");
	scanf("%d", &math_marks);
	
	printf("Enter Your Computer Marks: ");
	scanf("%d", &com_marks);
	
	printf("Enter Your Economics Marks: ");
	scanf("%d", &eco_marks);

	int total_marks = math_marks + com_marks + eco_marks;

	if (total_marks >= 120 && math_marks >= 33 && com_marks >= 33 && eco_marks >= 33) {
		printf("You are passed\n");
	} else {
		printf("You are failed\n");
	}

	return 0;
}

