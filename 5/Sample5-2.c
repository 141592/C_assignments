#include <stdio.h>

int main(){
	int inputN;

	do{
		printf("0を入力するまで繰り返し何度も入力します。\n");
		scanf("%d", &inputN);
	}while(inputN!=0);

	printf("0が入力されたので終了します\n");
	return 0;
}