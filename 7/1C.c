#include <stdio.h>

int main() {
	printf("AAAAAAA\n");
	fprintf(stdout, "Hello\n");
	fprintf(stderr, "Exit\n");
	printf("%d\n", 100 + 1);
	fprintf(stdout, "%d\n", 100 + 2);
	fprintf(stderr, "%d\n", 100 + 3);
	return 0;
}