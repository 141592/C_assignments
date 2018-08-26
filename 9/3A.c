
#include <stdio.h>
#include <string.h>

int main() {
	int loop1, loop2;
	char str1[81] = "AAA";
	char str2[81] = "BBBB";

	loop1 = strlen(str1);
	loop2 = 0;
	do {
		str1[loop1] = str2[loop2];
		loop1++;
		loop2++;
	} while (str2[loop2] != '\0');

	printf("str1:[%s]\n", str1);
	return 0;
}