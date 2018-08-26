#include <stdio.h>

int main(){
	int ans;

	printf("10~999の数字を入力してください\n");
	scanf("%d", &ans);

	if((9<ans) && (ans<1000)){
		if (ans/100!=0){
			switch(ans/100){
				case 2: printf("二"); break;
				case 3: printf("三"); break;
				case 4: printf("四"); break;
				case 5: printf("五"); break;
				case 6: printf("六"); break;
				case 7: printf("七"); break;
				case 8: printf("八"); break;
				case 9: printf("九"); break;
			}
			printf("百 ");
		}
		if((ans%100)/10!=0){
			switch((ans%100)/10){
				case 2: printf("二"); break;
				case 3: printf("三"); break;
				case 4: printf("四"); break;
				case 5: printf("五"); break;
				case 6: printf("六"); break;
				case 7: printf("七"); break;
				case 8: printf("八"); break;
				case 9: printf("九"); break;
			}
			printf("十 ");
		}
		switch(ans%10){
			case 1: printf("一"); break;
			case 2: printf("二"); break;
			case 3: printf("三"); break;
			case 4: printf("四"); break;
			case 5: printf("五"); break;
			case 6: printf("六"); break;
			case 7: printf("七"); break;
			case 8: printf("八"); break;
			case 9: printf("九"); break;
		}
		printf("\n");
	}else{
		printf("入力が不正です\n");
	}

	return 0;
}