#include <stdio.h>

int main(){
	int num=0;
	printf("%d\n", num);
	printf("%d\n", num++);
	printf("%d\n", num);

	printf("-----\n");
	num=0;
	printf("%d\n", num);
	printf("%d\n", ++num);
	printf("%d\n", num);

	printf("-----\n");
	printf("%d\n", 4/2);
	printf("%d\n", 5/2);
	printf("%d\n", 4/10);
	printf("%d\n", 9/10);

	printf("-----\n");
	printf("%f\n", 1/3);
	printf("%f\n", 1.0/3.0);
	printf("%f\n", 1.0/3);
	printf("%f\n", 1./3.);
	return 0;
}