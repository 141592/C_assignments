
#include <stdio.h>

int main() {
	char line[81], str1[81];
	int num;
	FILE *FP;

	printf("1行で英単語一つと数字を書いてください:\n");
	gets(line);
	sscanf(line, "%s %d", str1, &num);
	printf("単語は%s\n", str1);
	printf("数字は%d\n",num);

	for (num = 0; num < 5; num++) {
		sprintf(str1, "File%d.txt", num);
		FP = fopen(str1, "w");
		printf("Create File: %s\n", str1);
		fclose(FP);
	}
	return 0;
}