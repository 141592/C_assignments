
#include <stdio.h>

int main() {
	char ch;
	char str[81] = "The Force will be with you.";

	ch = 'A';
	printf("ch‚Ì•¶Žš‚Í[%c][%d]\n", ch, ch);
	ch = ch + 1;
	printf("ch‚Ì•¶Žš‚Í[%c][%d]\n", ch, ch);
	ch = ch + 1;
	printf("ch‚Ì•¶Žš‚Í[%c][%d]\n", ch, ch);

	printf("•¶Žš—ñ‚Ì•\Ž¦[%s]\n", str);
	return 0;
}