#include <stdio.h>
#include <Windows.h>

int main(){
	int num1, num2;
	double dnum=3.12;

	num1=1;	num2=2;
	printf("%d %d %f\n", num1, num2, dnum);
	printf("%%\n");
	printf("\"\n");

	//PC‚Ìƒ{ƒŠƒ…[ƒ€‚ğã‚°‚Ä‚©‚çÀs
	printf("\a\a\a\n");
	printf("abcde");
	Sleep(1000);
	printf("\b");
	Sleep(500);
	printf("\b");
	Sleep(500);
	printf("\b");
	Sleep(500);

	printf("0");
	Sleep(500);
	printf("0");
	Sleep(500);
	printf("0");
	Sleep(500);
	printf("0");
	Sleep(500);
	return 0;
}