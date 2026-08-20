#include <stdio.h>
                                                  int main() {                                              int num1, num2, num3, num4, num5, num6;                                                             printf("Enter Numbers in R1: ");	
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("Enter Numbers in R2: ");
	scanf("%d %d %d", &num4, &num5, &num6);
	
	int arr[][3] = {{num1, num2, num3},{num4, num5, num6}};

        for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
			}
		printf("\n");
        }
	

        return 0;
}

