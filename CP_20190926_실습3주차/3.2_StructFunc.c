#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student	// 구조체 선언
{
	char name[50];
	int age;
};

// 함수 프로토타입 선언
void display(struct student s);

int main()
{
	struct student s1;
	strcpy(s1.name, "홍길동");	// c의 string.h
	printf("%s\n\n", s1.name);

	printf("Enter name: ");
	scanf("%s", s1.name);
	printf("Enter age: ");
	scanf("%d", &s1.age);	// 구조체 멤버의 주소 전달

	display(s1);   // 보여주는 함수 호출

	return 0;
}

void display(struct student s)
{
	printf("\nDisplaying information\n");
	printf("Name: %s", s.name);
	printf("\nAge: %d", s.age);
}