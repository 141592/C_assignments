#include <stdio.h>

int main() {
	int count;
	FILE *FP;

	if ((FP = fopen("log.txt", "r")) == NULL) {
		count = 0;
	}
	else {
		fscanf(FP, "%d", &count);
		fclose(FP);
	}

	if ((FP = fopen("log.txt", "w")) == NULL) {
		printf("Error\n");
		return -1;
	}
	count++;
	printf("%d��ڂ̃v���O�������s�ł�\n", count);
	fprintf(FP, "%d", count);
	fclose(FP);
	return 0;
}