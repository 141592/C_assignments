#include <stdio.h>

int main() {
	FILE *FP;
	int num, loop;
	//���O������������
	FP = fopen("data.txt", "w");
	fprintf(FP, "10\n20\n30\n");
	fclose(FP);
	//���O���������܂�

	FP = fopen("data.txt", "r");
	for (loop = 0; loop < 3; loop++) {
		fscanf(FP, "%d", &num);
		printf("%d�Ԗ�: %d\n", loop + 1, num);
	}
	fclose(FP);
	return 0;
}