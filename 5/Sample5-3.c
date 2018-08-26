#include <stdio.h>

int main(){
	int ganpon, rishi, year;

	printf("年利5%%の利息(円未満切り捨て)が複利でかかる。\n");
	printf("1000円の元本が、2000円以上になるのは何年後で、いくらか\n");
	printf("----------\n");
	ganpon=1000;
	year=0;

	while(ganpon<2000){
		rishi=(int)(ganpon*0.05);
		ganpon=ganpon+rishi;
		year=year+1;
		printf("%2d年目: %5d円\n", year, ganpon);
	}

	printf("\n\n2000円以上になるのは、%d年後で%d円です\n", year, ganpon);

	return 0;
}