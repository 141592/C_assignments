#include <stdio.h>

int main(){
	int i,j,k;
	double score[3][20][2];		//�N���X���Ƃ̃e�X�g�f�[�^��[�N���X][�l��][�p��A���w�̓_��]
	int people[3][6][2]={0};	//�N���X���Ƃ̓���͈̔͂̓_���̐l����[�N���X�ԍ�][�͈�][�p��A���w]

	for(k=0; k<3; k++){
		printf("%d�N���X�ڂ̃f�[�^\n", k+1);
		for(i=0; i<20; i++){
			printf("%2d�l�ڂ̓_�����p��A���w�̏��ԂŁ�,���̂悤�ɓ��͂��Ă�������:",i+1);
			scanf("%lf,%lf",&score[k][i][0],&score[k][i][1]);
		}
	}

	for(k=0; k<3; k++){
		for(i=0; i<2; i++){
			for(j=0; j<20; j++){
				if(score[k][j][i]<20){
					people[k][0][i]+=1;
				}else if(score[k][j][i]<40){
					people[k][1][i]+=1;
				}else if(score[k][j][i]<60){
					people[k][2][i]+=1;
				}else if(score[k][j][i]<80){
					people[k][3][i]+=1;
				}else if(score[k][j][i]<100){
					people[k][4][i]+=1;
				}else if(score[k][j][i]==100){
					people[k][5][i]+=1;
				}
			}
		}
	}

	for(i=0; i<3; i++){
		printf("%d�N���X�ڂ̏W�v����\n",i+1);
		printf("		Eng   Math\n");
		printf(" 0�ȏ� 20����	%2d%6d\n", people[i][0][0], people[i][0][1]);
		printf("20�ȏ� 40����	%2d%6d\n", people[i][1][0], people[i][1][1]);
		printf("40�ȏ� 60����	%2d%6d\n", people[i][2][0], people[i][2][1]);
		printf("60�ȏ� 80����	%2d%6d\n", people[i][3][0], people[i][3][1]);
		printf("80�ȏ�100����	%2d%6d\n", people[i][4][0], people[i][4][1]);
		printf("100�_		%2d%6d\n", people[i][5][0], people[i][5][1]);
	}
	printf("�S�N���X�W�v����\n");
	printf("		Eng   Math\n");
	printf(" 0�ȏ� 20����	%2d%6d\n", people[0][0][0]+people[1][0][0]+people[2][0][0], people[0][0][1]+people[1][0][1]+people[2][0][1]);
	printf("20�ȏ� 40����	%2d%6d\n", people[0][1][0]+people[1][1][0]+people[2][1][0], people[0][1][1]+people[1][1][1]+people[2][1][1]);
	printf("40�ȏ� 60����	%2d%6d\n", people[0][2][0]+people[1][2][0]+people[2][2][0], people[0][2][1]+people[1][2][1]+people[2][2][1]);
	printf("60�ȏ� 80����	%2d%6d\n", people[0][3][0]+people[1][3][0]+people[2][3][0], people[0][3][1]+people[1][3][1]+people[2][3][1]);
	printf("80�ȏ�100����	%2d%6d\n", people[0][4][0]+people[1][4][0]+people[2][4][0], people[0][4][1]+people[1][4][1]+people[2][4][1]);
	printf("100�_		%2d%6d\n", people[0][5][0]+people[1][5][0]+people[2][5][0], people[0][5][1]+people[1][5][1]+people[2][5][1]);
	
	return 0;
}