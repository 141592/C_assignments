#include <stdio.h>

int main() {
	FILE *FP;
	int num, loop;
	//事前準備ここから
	FP = fopen("data.txt", "w");
	fprintf(FP, "10\n20\n30\n");
	fclose(FP);
	//事前準備ここまで

	FP = fopen("data.txt", "r");
	for (loop = 0; loop < 3; loop++) {
		fscanf(FP, "%d", &num);
		printf("%d番目: %d\n", loop + 1, num);
	}
	fclose(FP);
	return 0;
}