#include <stdio.h>

int main(){
	int ans;

	printf("10~999�̐�������͂��Ă�������\n");
	scanf("%d", &ans);

	if((9<ans) && (ans<1000)){
		if (ans/100!=0){
			switch(ans/100){
				case 2: printf("��"); break;
				case 3: printf("�O"); break;
				case 4: printf("�l"); break;
				case 5: printf("��"); break;
				case 6: printf("�Z"); break;
				case 7: printf("��"); break;
				case 8: printf("��"); break;
				case 9: printf("��"); break;
			}
			printf("�S ");
		}
		if((ans%100)/10!=0){
			switch((ans%100)/10){
				case 2: printf("��"); break;
				case 3: printf("�O"); break;
				case 4: printf("�l"); break;
				case 5: printf("��"); break;
				case 6: printf("�Z"); break;
				case 7: printf("��"); break;
				case 8: printf("��"); break;
				case 9: printf("��"); break;
			}
			printf("�\ ");
		}
		switch(ans%10){
			case 1: printf("��"); break;
			case 2: printf("��"); break;
			case 3: printf("�O"); break;
			case 4: printf("�l"); break;
			case 5: printf("��"); break;
			case 6: printf("�Z"); break;
			case 7: printf("��"); break;
			case 8: printf("��"); break;
			case 9: printf("��"); break;
		}
		printf("\n");
	}else{
		printf("���͂��s���ł�\n");
	}

	return 0;
}