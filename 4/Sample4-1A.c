#include <stdio.h>

int main(){
	int ans;

	printf("好きな季節は夏ですか\nYes:1 No: 0\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("夏はいいですよね\n");
	}else{
		printf("夏は暑いですからね\n");
	}

	return 0;
}