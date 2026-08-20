#include <stdio.h>

void ten_times(int* var) {
	*var = *var * 10;
			}

int main() {
	int i = 10;
	
	printf("Value: %d\n", i);
	ten_times(&i);
	printf("Value: %d\n", i);

	return 0;
}

