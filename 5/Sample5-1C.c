#include <stdio.h>

int main(){
	int loop;
	int tmp;

	printf("������Ԃ�5�\�����܂�\n");
	for(loop=0; loop<5; loop++){
		tmp=1+loop*2;
		printf("%d: %3d\n", loop+1, tmp);
	}

	printf("\n\n-----�ʂȕ��@-----\n\n");
	printf("������Ԃ�5�\�����܂�\n");
	for(loop=0; loop<5; loop++){
		printf("%d: %3d\n", loop+1, 1+loop*2);
	}

	return 0;
}