#include <stdio.h>

int main(){
	int i,j,data[20],people;

	for(i=0; i<20; i++){
		printf("%2d�l�ڂ̃e�X�g�̓_����0-10�_�ł��Ȃ���:",i+1);
		scanf("%d",&data[i]);
	}

	for(i=0; i<11; i++){
		people=0;
		printf("%2d�_",i);
		for(j=0; j<20; j++){
			if(data[j]==i){
				people=people+1;
			}
		}
		printf("%4d�l\n",people);
	}
	return 0;
}