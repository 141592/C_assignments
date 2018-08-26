
#include <stdio.h>

int main() {
	char strA[8] = "ABCDEFGH";
	char strB[8] = "1A2B3C4";

	printf("A: [%s]\n\n", strA);
	printf("B: [%s]\n\n", strB);

	strB[2] = ' ';
	printf("B2: [%s]\n\n", strB);

	strB[4] = '\n';
	printf("B1: [%s]\n\n", strB);

	strB[1] = '\0';
	printf("B3: [%s]\n\n", strB);
	return 0;
}