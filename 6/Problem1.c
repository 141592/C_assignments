#include <stdio.h>

int main(){
	int data[10];
	int loop, total=0;

	for(loop=0; loop<10; loop++){
		data[loop]=loop+1;
	}

	for(loop=0; loop<10; loop++){
		total=total+data[loop];
	}

	printf("data[]‚Ì•½‹Ï‚Í: %f\n", total/10.0);
	return 0;
}