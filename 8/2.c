
#include <stdio.h>

int main() {
	char ch1, ch2;
	printf("2文字入力しEnterを押してください\n");
	scanf("%c", &ch1);
	scanf("%c", &ch2);
	printf("ch1=[%c]\nch2=[%c]\n", ch1, ch2);
	if (ch1 == ch2) {
		printf("ch1とch2は等しい\n");
	}
	else {
		if (ch1 > ch2) {
			printf("ch1のほうが大きい\n");
		}
		else {
			printf("ch2のほうが大きい\n");
		}
	}
	printf("ch1=%c=%d\n", ch1, ch1);
	printf("ch2=%c=%d\n", ch2, ch2);
	return 0;
}