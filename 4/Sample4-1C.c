#include <stdio.h>

int main(){
	int ans;

	printf("D‚«‚È‹Gß‚Í‰Ä‚Å‚·‚©\nYes:1 No:0\n");
	scanf("%d", &ans);

	if(ans==1){
		printf("‰Ä‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
	}else{
		printf("‚»‚ê‚Å‚ÍA“~‚ÍD‚«‚Å‚·‚©\nYes:1 No:0\n");
		scanf("%d", &ans);

		if(ans==1){
			printf("“~‚Í‚¢‚¢‚Å‚·‚æ‚Ë\n");
		}else{
			printf("‹‚¢‚Ì‚àŠ¦‚¢‚Ì‚àŒ™‚Å‚·‚æ‚Ë\n");
		}
	}

	printf("‚²‰ñ“š‚ ‚è‚ª‚Æ‚¤‚²‚´‚¢‚Ü‚µ‚½\n");
	return 0;
}