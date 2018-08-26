#include <stdio.h>

int main() {
	int num;
	FILE *FP;

	FP = fopen("dir1\\out1.txt", "w");
	if (FP == NULL) {
		printf("dir1\\out1.txtが作成できません\n");
		return -1;
	}
	else {
		printf("ファイルに書き込み成功\n");
		fprintf(FP, "0123456789\n");
		fclose(FP);
	}
	if ((FP = fopen("dir2\\out2.txt", "w")) == NULL) {
		printf("dir2\\out2.txtが作成できません\n");
		return -1;
	}
	else {
		printf("ファイルに書き込み成功\n");
		fprintf(FP, "ABCDEFG\n");
		fclose(FP);
	}
	return 0;
}