
#include <stdio.h>

int main() {
	char ch1, ch2;
	printf("2�������͂�Enter�������Ă�������\n");
	scanf("%c", &ch1);
	scanf("%c", &ch2);
	printf("ch1=[%c]\nch2=[%c]\n", ch1, ch2);
	if (ch1 == ch2) {
		printf("ch1��ch2�͓�����\n");
	}
	else {
		if (ch1 > ch2) {
			printf("ch1�̂ق����傫��\n");
		}
		else {
			printf("ch2�̂ق����傫��\n");
		}
	}
	printf("ch1=%c=%d\n", ch1, ch1);
	printf("ch2=%c=%d\n", ch2, ch2);
	return 0;
}