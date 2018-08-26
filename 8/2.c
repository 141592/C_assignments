
#include <stdio.h>

int main() {
	char ch1, ch2;
	printf("2•¶Žš“ü—Í‚µEnter‚ð‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%c", &ch1);
	scanf("%c", &ch2);
	printf("ch1=[%c]\nch2=[%c]\n", ch1, ch2);
	if (ch1 == ch2) {
		printf("ch1‚Æch2‚Í“™‚µ‚¢\n");
	}
	else {
		if (ch1 > ch2) {
			printf("ch1‚Ì‚Ù‚¤‚ª‘å‚«‚¢\n");
		}
		else {
			printf("ch2‚Ì‚Ù‚¤‚ª‘å‚«‚¢\n");
		}
	}
	printf("ch1=%c=%d\n", ch1, ch1);
	printf("ch2=%c=%d\n", ch2, ch2);
	return 0;
}