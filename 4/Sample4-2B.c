#include <stdio.h>

int main(){
	int ans;
	printf("�������f���܂�\n");
	printf("1: �n���o�[�K�P�i\n");
	printf("2: �n���o�[�K+�h�����N\n");
	printf("3: �n���o�[�K+�h�����N+�|�e�g\n");
	printf("1-3�ȊO�̐�: �X�}�C��\n");

	scanf("%d", &ans);
	printf("----------\n");
	switch(ans){
		case 3: printf("�|�e�g���҂������܂���\n");
		case 2: printf("�h�����N���҂������܂���\n");
		case 1: printf("�n���o�[�K���҂������܂���\n"); break;
		default: printf("�����܂�ɂȂ����炨�\���t����������\n");
	}

	printf("----------\n");
	printf("���肪�Ƃ��������܂���\n");
	return 0;
}