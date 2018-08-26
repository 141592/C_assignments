#include <stdio.h>

int main(){
	int ans;
	printf("注文を伺います\n");
	printf("1: ハンバーガ単品\n");
	printf("2: ハンバーガ+ドリンク\n");
	printf("3: ハンバーガ+ドリンク+ポテト\n");
	printf("1-3以外の数: スマイル\n");

	scanf("%d", &ans);
	printf("----------\n");
	switch(ans){
		case 3: printf("ポテトお待たせしました\n");
		case 2: printf("ドリンクお待たせしました\n");
		case 1: printf("ハンバーガお待たせしました\n"); break;
		default: printf("お決まりになったらお申し付けください\n");
	}

	printf("----------\n");
	printf("ありがとうございました\n");
	return 0;
}