
#include <stdio.h>

int main() {
	char str1[81];
	int loop;

	printf("‰p•¶š—ñ‚P‚Â‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%s", str1);

	loop = 0;
	while (str1[loop] != '\0') {
		loop++;
	}
	printf("\n•¶š”‚ÍA%d•¶š‚Å‚·\n", loop);
	return 0;
}