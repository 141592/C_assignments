#include <stdio.h>

int main() {
	int num;
	FILE *FP;

	FP = fopen("dir1\\out1.txt", "w");
	if (FP == NULL) {
		printf("dir1\\out1.txt���쐬�ł��܂���\n");
		return -1;
	}
	else {
		printf("�t�@�C���ɏ������ݐ���\n");
		fprintf(FP, "0123456789\n");
		fclose(FP);
	}
	if ((FP = fopen("dir2\\out2.txt", "w")) == NULL) {
		printf("dir2\\out2.txt���쐬�ł��܂���\n");
		return -1;
	}
	else {
		printf("�t�@�C���ɏ������ݐ���\n");
		fprintf(FP, "ABCDEFG\n");
		fclose(FP);
	}
	return 0;
}