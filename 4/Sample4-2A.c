#include <stdio.h>

int main(){
	int ans;
	printf("�D���ȋG�߂͏t(1), ��(2), �H(3), �~(4)\n");
		scanf("%d", &ans);

		switch(ans){
			case 1: printf("�t�͂����ł����\n");
				break;
			case 2: printf("�Ă͂����ł����\n");
				break;
			case 3: printf("�H�͂����ł����\n");
				break;
			case 4: printf("�~�͂����ł����\n");
				break;
		}
		printf("���񓚂��肪�Ƃ��������܂���\n");
		return 0;
}