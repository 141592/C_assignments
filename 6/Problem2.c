#include <stdio.h>

int main(){
	int i,j,data[20],people;

	for(i=0; i<20; i++){
		printf("%2d人目のテストの点数を0-10点でつけなさい:",i+1);
		scanf("%d",&data[i]);
	}

	for(i=0; i<11; i++){
		people=0;
		printf("%2d点",i);
		for(j=0; j<20; j++){
			if(data[j]==i){
				people=people+1;
			}
		}
		printf("%4d人\n",people);
	}
	return 0;
}