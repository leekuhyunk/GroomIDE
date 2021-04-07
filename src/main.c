#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("Hello, goorm!\n");
	char tmp[100];
	char test[] = {'t','e','s','t'};
	strncpy(tmp, test, 1);
	printf("결과 %s\n", tmp);
	return 0;
}