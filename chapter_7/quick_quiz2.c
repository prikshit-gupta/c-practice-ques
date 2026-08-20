#include <stdio.h>

int main() {
	int arr[] = {10, 20, 30, 40, 50};
	
	//1
	int *ptr = &arr[0];
	ptr += 3;

	printf("%d\n", ptr);
        printf("%d\n", *ptr);

	//2
	int *ptr2 = &arr[4];
	ptr2 -= 2;

	printf("%d\n", ptr2);
	printf("%d\n", *ptr2);

	//3
	printf("%d\n", ptr2-ptr);

	//4
	int result = ptr2 < ptr; //True
	printf("%d\n", result);

	return 0;
}

