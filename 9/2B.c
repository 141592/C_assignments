
#include <stdio.h>
#include <string.h>

int main() {
	char str1[81], str2[81];
	strcpy(str1, "The Force will be with you, always.");
	strcpy(str2, str1);

	printf("str1:[%s]\n", str1);
	printf("str2:[%s]\n", str2);
	return 0;
}