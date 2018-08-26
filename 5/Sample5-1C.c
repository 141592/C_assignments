#include <stdio.h>

int main(){
	int loop;
	int tmp;

	printf("Šï”‚ğ‡”Ô‚É5ŒÂ•\¦‚µ‚Ü‚·\n");
	for(loop=0; loop<5; loop++){
		tmp=1+loop*2;
		printf("%d: %3d\n", loop+1, tmp);
	}

	printf("\n\n-----•Ê‚È•û–@-----\n\n");
	printf("Šï”‚ğ‡”Ô‚É5ŒÂ•\¦‚µ‚Ü‚·\n");
	for(loop=0; loop<5; loop++){
		printf("%d: %3d\n", loop+1, 1+loop*2);
	}

	return 0;
}