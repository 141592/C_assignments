#include <stdio.h>

int main() {
	FILE *FP;
	int num, loop;
	//–‘O€”õ‚±‚±‚©‚ç
	FP = fopen("data.txt", "w");
	fprintf(FP, "10\n20\n30\n");
	fclose(FP);
	//–‘O€”õ‚±‚±‚Ü‚Å

	FP = fopen("data.txt", "r");
	for (loop = 0; loop < 3; loop++) {
		fscanf(FP, "%d", &num);
		printf("%d”Ô–Ú: %d\n", loop + 1, num);
	}
	fclose(FP);
	return 0;
}