
#include <stdio.h>
#include <string.h>

int main() {
	char str1[81] = "AAA";
	char str2[81] = "BBBB";

	strcat(str1, str2);

	printf("str1:[%s]\n", str1);
	return 0;
}