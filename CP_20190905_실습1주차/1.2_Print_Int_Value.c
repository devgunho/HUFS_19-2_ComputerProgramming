#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int input = 0;
	scanf("%d", &input);
	printf("\'정수\' : %d\n", input);
	printf("\'unsigned\' : %u\n", input);
	printf("\'8진수\' : %o\n", input);
	printf("\'16진수\' : %x\n", input);
	printf("0x%X\n", input);

	return 0;
}