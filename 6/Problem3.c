#include <stdio.h>

int main(){
	int xx, yy;
	int product[9][9];

	for(yy=0; yy<9; yy++){
		for(xx=0; xx<9; xx++){
			product[yy][xx]=(xx+11)*(yy+11);
			printf("%4d",product[yy][xx]);
		}
		printf("\n");
	}
	return 0;
}