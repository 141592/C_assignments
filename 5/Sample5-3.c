#include <stdio.h>

int main(){
	int ganpon, rishi, year;

	printf("�N��5%%�̗���(�~�����؂�̂�)�������ł�����B\n");
	printf("1000�~�̌��{���A2000�~�ȏ�ɂȂ�͉̂��N��ŁA�����炩\n");
	printf("----------\n");
	ganpon=1000;
	year=0;

	while(ganpon<2000){
		rishi=(int)(ganpon*0.05);
		ganpon=ganpon+rishi;
		year=year+1;
		printf("%2d�N��: %5d�~\n", year, ganpon);
	}

	printf("\n\n2000�~�ȏ�ɂȂ�̂́A%d�N���%d�~�ł�\n", year, ganpon);

	return 0;
}