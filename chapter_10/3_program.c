#include <stdio.h>

int main() {
	FILE *ptr;
	FILE *ptr2;

	ptr = fopen("file3.txt" , "r");
	ptr2 = fopen("file4.txt", "a");

	int ch;
	while ((ch = fgetc(ptr))!=EOF){
		fprintf(ptr2, "%c%c",ch,ch);		    printf("%c", ch);
		
	}
	
	fclose(ptr);
	fclose(ptr2);

	return 0;
}

