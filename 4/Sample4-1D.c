#include <stdio.h>

int main(){
	int ans;

	printf("�D���ȋG�߂͏t(1), ��(2), �H(3), �~(4)\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("�t�͂����ł����\n");
	}
	if(ans==2){
		printf("�Ă͂����ł����\n");
	}
	if(ans==3){
		printf("�H�͂����ł����\n");
	}
	if(ans==4){
		printf("�~�͂����ł����\n");
	}

	printf("���񓚂��肪�Ƃ��������܂���\n");

	return 0;
}