#include <stdio.h>

void print_the_array(int arr[], int n){
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

void reverse_the_array(int arr[], int n){
	for (int i = 0; i < n/2 ; i++) {
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	return ;
}

int main() {
	int n = 5, arr[n] = {10, 20, 30, 40, 50};

	reverse_the_array(arr, n);
	print_the_array(arr, n);
	
	return 0;
}

