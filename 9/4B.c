
#include <stdio.h>
#include <string.h>

int main() {
	char instr[81],ans[81]="Yes";
	do {
		printf("Yes‚Æ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
		scanf("%s", instr);
	} while (strcmp(instr, ans) != 0);
	printf("Thank you.\n");
	return 0;
}