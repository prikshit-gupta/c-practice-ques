#include <stdio.h>

void ten_times(int var) {
        var = var * 10;
                        }

int main() {
        int i = 10;
	
	printf("Value: %d", i);
        ten_times(i);
	printf("Value: %d", i);

        return 0;
}

