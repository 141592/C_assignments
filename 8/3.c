
#include <stdio.h>

int main() {
	int num;
	double dnum;
	char ch0, ch1, ch2;
	char str[81];

	printf("®”‚ğ“ü—Í:");
	scanf("%d", &num);
	printf("À”‚ğ“ü—Í:");
	scanf("%lf", &dnum);
	printf("‰pš1•¶š‚Æ‰üs“ü—Í:");
	scanf("%c%c%c", &ch0, &ch1, &ch2);
	printf("‰p•¶š—ñ‚Æ‰üs“ü—Í:");
	scanf("%s", &str);

	printf("[%d]‚Å‚·\n", num);
	printf("[%f]‚Å‚·\n", dnum);
	printf("[%c][%c][%c]\n", ch0, ch1, ch2);
	printf("[%s]\n", str);
	return 0;
}