#include <stdio.h>

int main() {
	int arr[10] ;
	
	int *ptr = &arr[0];
	
	printf("Address of arr[1]: %d\n", ptr);
	printf("Address of arr[3]: %d\n", &arr[2]);
	printf("Address after passing function of arr[3]: %d\n", ptr + 2);

	return 0;
}

