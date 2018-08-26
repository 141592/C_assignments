#include <stdio.h>

int main(){
	int i,j,k;
	double score[3][20][2];		//クラスごとのテストデータ→[クラス][人数][英語、数学の点数]
	int people[3][6][2]={0};	//クラスごとの特定の範囲の点数の人数→[クラス番号][範囲][英語、数学]

	for(k=0; k<3; k++){
		printf("%dクラス目のデータ\n", k+1);
		for(i=0; i<20; i++){
			printf("%2d人目の点数を英語、数学の順番で○,△のように入力してください:",i+1);
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
		printf("%dクラス目の集計結果\n",i+1);
		printf("		Eng   Math\n");
		printf(" 0以上 20未満	%2d%6d\n", people[i][0][0], people[i][0][1]);
		printf("20以上 40未満	%2d%6d\n", people[i][1][0], people[i][1][1]);
		printf("40以上 60未満	%2d%6d\n", people[i][2][0], people[i][2][1]);
		printf("60以上 80未満	%2d%6d\n", people[i][3][0], people[i][3][1]);
		printf("80以上100未満	%2d%6d\n", people[i][4][0], people[i][4][1]);
		printf("100点		%2d%6d\n", people[i][5][0], people[i][5][1]);
	}
	printf("全クラス集計結果\n");
	printf("		Eng   Math\n");
	printf(" 0以上 20未満	%2d%6d\n", people[0][0][0]+people[1][0][0]+people[2][0][0], people[0][0][1]+people[1][0][1]+people[2][0][1]);
	printf("20以上 40未満	%2d%6d\n", people[0][1][0]+people[1][1][0]+people[2][1][0], people[0][1][1]+people[1][1][1]+people[2][1][1]);
	printf("40以上 60未満	%2d%6d\n", people[0][2][0]+people[1][2][0]+people[2][2][0], people[0][2][1]+people[1][2][1]+people[2][2][1]);
	printf("60以上 80未満	%2d%6d\n", people[0][3][0]+people[1][3][0]+people[2][3][0], people[0][3][1]+people[1][3][1]+people[2][3][1]);
	printf("80以上100未満	%2d%6d\n", people[0][4][0]+people[1][4][0]+people[2][4][0], people[0][4][1]+people[1][4][1]+people[2][4][1]);
	printf("100点		%2d%6d\n", people[0][5][0]+people[1][5][0]+people[2][5][0], people[0][5][1]+people[1][5][1]+people[2][5][1]);
	
	return 0;
}