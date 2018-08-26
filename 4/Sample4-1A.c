#include <stdio.h>

int main(){
	int ans;

	printf("D‚«‚È‹Gß‚Í‰Ä‚Å‚·‚©\nYes:1 No: 0\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("‰Ä‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
	}else{
		printf("‰Ä‚Í‹‚¢‚Å‚·‚©‚ç‚Ë\n");
	}

	return 0;
}