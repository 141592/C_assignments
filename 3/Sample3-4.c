#include <stdio.h>

int main(){
	int num1=1, num2=3;
	double dnum=3.14;

	printf("1€3‚ğ‚·‚é‡@: %f\n", 1/3);
	printf("1€3‚ğ‚·‚é‡A: %f\n", 1./3);
	printf("1€3‚ğ‚·‚é‡B: %f\n", 1/3.);

	printf("1€3‚ğ‚·‚é‡C: %f\n", num1/num2);
	printf("1€3‚ğ‚·‚é‡D: %f\n", (double)num1/num2);
	printf("1€3‚ğ‚·‚é‡E: %f\n", num1*1.0/num2);

	num1=dnum;
	num1=(int)dnum;

	return 0;
}