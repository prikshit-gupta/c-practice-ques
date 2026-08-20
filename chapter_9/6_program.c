#include <stdio.h>

struct Complex
{
        int real;
        int image;
};

void display(struct Complex *num) {
	for (int i = 0; i<5; i++) {
		printf("Number [%d]: %d + %di\n", i, num[i].real, num[i].image);
	}
}

int main() {
        struct Complex num[5];
	
	for (int i = 0; i < 5; i++) {
		printf("Enter Input for Number [%d]\n", i);
        	printf("Enter Real Part: ");
        	scanf("%d", &num[i].real);

        	printf("Enter Imagery Part: ");
        	scanf("%d", &num[i].image);

	
	}
	
	printf("\n");
	display(num);

        return 0;
}

