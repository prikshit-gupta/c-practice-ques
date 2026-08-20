#include <stdio.h>
                                            int main() {
        char	etext = "Ifmmp";
	
	int i = 0;                                  while(etext[i] != '\0') {
                etext[i] = etext[i]-1;                          i++;                                }                                                                                       printf("Decrypted Text: %s", etext);                return 0;                           }

