#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct dog
{
	char name[10];
	char breed[10];
	int age;
	char color[10];
};

int main()
{
	printf("%d\n", sizeof(struct dog*));	// 뭐든 포인터 변수의 크기는 4byte
	return 0;
}