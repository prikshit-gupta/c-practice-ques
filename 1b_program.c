#include<stdio.h>

int main() {
	int length, breadth;
	
	printf("Enter length: ");
	scanf("%d", &length);
	
	printf("Enter breadth: ");
	scanf("%d", &breadth);
	
	int area = length * breadth;
	
	printf("Area of Rectangle: %d\n", area);
	
	return 0;
}

