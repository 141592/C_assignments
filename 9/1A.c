
#include <stdio.h>

int main() {
	char str1[81];
	int loop;

	printf("英文字列１つを入力してください:");
	scanf("%s", str1);

	loop = 0;
	while (str1[loop] != '\0') {
		loop++;
	}
	printf("\n文字数は、%d文字です\n", loop);
	return 0;
}