
#include <stdio.h>

int main() {
	char str1[81];
	int loop;

	printf("�p������P����͂��Ă�������:");
	scanf("%s", str1);

	loop = 0;
	while (str1[loop] != '\0') {
		loop++;
	}
	printf("\n�������́A%d�����ł�\n", loop);
	return 0;
}