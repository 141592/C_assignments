#include <stdio.h>

int main(){
	int ans;

	printf("D‚«‚È‹Gß‚Ít(1), ‰Ä(2), H(3), “~(4)\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("t‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
	}
	if(ans==2){
		printf("‰Ä‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
	}
	if(ans==3){
		printf("H‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
	}
	if(ans==4){
		printf("“~‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
	}

	printf("‚²‰ñ“š‚ ‚è‚ª‚Æ‚¤‚²‚´‚¢‚Ü‚µ‚½\n");

	return 0;
}