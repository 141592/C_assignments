#include <stdio.h>

int main(){
	int ans;

	printf("好きな季節は夏ですか\nYes:1 No:0\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("夏はいいですよね\n");
	}else{
		printf("それでは、冬は好きですか\nYes:1 No:0\n");
		scanf("%d", &ans);

		if(ans==1){
			printf("冬はいいですよね\n");
		}else{
			printf("暑いのも寒いのも嫌ですよね\n");
		}
	}

	printf("ご回答ありがとうございました\n");
	return 0;
}