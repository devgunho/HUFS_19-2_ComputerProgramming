#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>

int main()
{
	printf("%d : %s : %x\n", '\0', '\0', '\0');
	printf("%d : %s : %x\n", "\0", "\0", "\0");
	printf("%d : %s : %x\n", "1", "1", "1");
	return 0;
}