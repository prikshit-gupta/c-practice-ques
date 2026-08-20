#include <stdio.h>

int count_positive(int arr[], int n) {
	int positive_num = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			positive_num++;
		}
	}

	return positive_num;
}

int main() {
	int  arr[] = {1, -1, 2, 3};
	printf("Number of positive no: %d", count_positive(arr, 4));
	return 0;
}

