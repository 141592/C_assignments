#include <stdio.h>

int main() {
	int num;
	FILE *FP;

	FP = fopen("out.txt", "a");

	fprintf(FP, "0 1 2\n");
	fprintf(FP, "ABCD\nXYZ\n");
	num = 123;
	fprintf(FP, "%d\n", num);
	fprintf(FP, "‚ ‚¢‚¤‚¦‚¨\n");

	fclose(FP);
	return 0;
}