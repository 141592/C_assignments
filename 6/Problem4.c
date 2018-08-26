#include <stdio.h>

int main(){
	int i,j;
	double score[20][2];
	int people[6][2]={0};

	for(i=0; i<20; i++){
		printf("%2d人目の点数を英語、数学の順番で○,△のように入力してください:",i+1);
		scanf("%lf,%lf",&score[i][0],&score[i][1]);
	}

	for(i=0; i<2; i++){
		for(j=0; j<20; j++){
			if(score[j][i]<20){
				people[0][i]+=1;
			}else if(score[j][i]<40){
				people[1][i]+=1;
			}else if(score[j][i]<60){
				people[2][i]+=1;
			}else if(score[j][i]<80){
				people[3][i]+=1;
			}else if(score[j][i]<100){
				people[4][i]+=1;
			}else if(score[j][i]==100){
				people[5][i]+=1;
			}
		}
	}
	printf("		Eng   Math\n");
	printf(" 0以上 20未満	%2d%6d\n", people[0][0], people[0][1]);
	printf("20以上 40未満	%2d%6d\n", people[1][0], people[1][1]);
	printf("40以上 60未満	%2d%6d\n", people[2][0], people[2][1]);
	printf("60以上 80未満	%2d%6d\n", people[3][0], people[3][1]);
	printf("80以上100未満	%2d%6d\n", people[4][0], people[4][1]);
	printf("100点		%2d%6d\n", people[5][0], people[5][1]);

	return 0;
}