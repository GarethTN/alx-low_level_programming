#include <stdio.h>
#include <string.h>

void concatenateStrings(char result[], const char str1[], const char str2[] {
		strcpy(result, str1);
		strcat(result, str2);
		
	}

	int main() {
	char string1[] = "hello, ";
	char string2[] = "world!;
	char result[50]; 

	concatenateStrings(resullt, string1, string2);
	printf("%s\n", result);
	
	return 0;

	}
