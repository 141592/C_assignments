
#include <stdio.h>

int main() {
	int num;
	double dnum;
	char ch0, ch1, ch2;
	char str[81];

	printf("���������:");
	scanf("%d", &num);
	printf("���������:");
	scanf("%lf", &dnum);
	printf("�p��1�����Ɖ��s����:");
	scanf("%c%c%c", &ch0, &ch1, &ch2);
	printf("�p������Ɖ��s����:");
	scanf("%s", &str);

	printf("[%d]�ł�\n", num);
	printf("[%f]�ł�\n", dnum);
	printf("[%c][%c][%c]\n", ch0, ch1, ch2);
	printf("[%s]\n", str);
	return 0;
}