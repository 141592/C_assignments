#include <stdio.h>

int main() {
	FILE *FP;


	FP = fopen("out.txt", "a");
	fprintf(FP, "Hello\n");
	fclose(FP);

	return 0;
}