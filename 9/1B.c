//4D21 田口晴信
#include <stdio.h>
#include <string.h>

int main() {
	char str1[81];

	printf("英文字列１つを入力してください:");
	scanf("%s", str1);

	printf("\n文字数は、%d文字です\n", strlen(str1));
	return 0;
}