#include <stdio.h>

int main() {
	FILE *ptr;
	ptr = fopen("file.txt","r");

	if (ptr == NULL){
		printf("File doesn't exist");
	}else{
		printf("File exit");
	}
}

