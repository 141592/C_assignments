
#include <stdio.h>

int main() {
	char ch;
	char str[81] = "The Force will be with you.";

	ch = 'A';
	printf("ch�̕�����[%c][%d]\n", ch, ch);
	ch = ch + 1;
	printf("ch�̕�����[%c][%d]\n", ch, ch);
	ch = ch + 1;
	printf("ch�̕�����[%c][%d]\n", ch, ch);

	printf("������̕\��[%s]\n", str);
	return 0;
}