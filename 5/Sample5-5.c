#include <stdio.h>

int main(){
	int x, y;
	printf("9x9\n");

	for(y=0; y<9; y++){
		for(x=0; x<9; x++){
			printf("%3d", (x+1)*(y+1));
		}
		printf("\n");
	}
	return 0;
}