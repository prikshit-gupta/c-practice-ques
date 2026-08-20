#include <stdio.h>

int main() {
        int arr[10], num;

        printf("Enter Number: ");
        scanf("%d", &num);

        for (int i = 1; i <= 10; i++) {
                arr[i-1] = i * num;
		printf("The value of %d × %d = %d\n", num, i, arr[i-1]);
        }

        return 0;
}

