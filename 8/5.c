
#include <stdio.h>

int main() {
	FILE *FP;
	char str[81];
	printf("文字列入力:");
	scanf("%s", &str);

	printf("書き込み中\n");
	FP = fopen("AAA.txt", "w");
	fprintf(FP, "%d\n", 100);
	fprintf(FP, "%s\n", str);
	fputs("END END END\n", FP);
	fclose(FP);
	printf("書き込み完了\n");

	FP = fopen("AAA.txt", "r");
	while (fscanf(FP, "%s", str) != EOF) {
		puts(str);
	}
	fclose(FP);
	printf("\n----------\n");

	FP = fopen("AAA.txt", "r");
	while (fgets(str, 80, FP) != NULL) {
		puts(str);
	}
	fclose(FP);
	printf("\n----------\n");
	return 0;
}