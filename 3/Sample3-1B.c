#include <stdio.h>

int main() {
	int num1, num2;
	double dnum;

	num1 = 12345;	num2 = 12;	dnum = 3.141592;

	printf("®”1=%d\n", num1);
	printf("®”2=%d\n", num2);
	printf("À”=%f\n", dnum);

	printf("----------\n");
	printf("®”1=%5d\n", num1 + 1);
	printf("®”2=%5d\n", num2 - 1);
	printf("À”A=%5.2f\n", dnum);
	printf("À”B=%7.2f\n", dnum);
	printf("À”C=%5.3f\n", dnum + 10000);

	printf("----------\n");
	printf("®”1=%d\n", num1);
	printf("®”2=%d\n", num2);
	printf("À”=%f\n", dnum);

	return 0;
}