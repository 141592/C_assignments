#include <stdio.h>

int main(){
	int ans;

	printf("�D���ȋG�߂͉Ăł���\nYes:1 No: 0\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("�Ă͂����ł����\n");
	}else{
		printf("�Ă͏����ł������\n");
	}

	return 0;
}