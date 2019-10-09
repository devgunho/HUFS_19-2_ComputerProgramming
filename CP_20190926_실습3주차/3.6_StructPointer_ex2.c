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
	struct dog my_dog = { "hi", "Bulldog", 5, "white" };
	struct dog* ptr_dog;

	printf("%d\n", sizeof(struct dog*));	// 뭐든 포인터 변수의 크기는 4byte

	ptr_dog = &my_dog;

	printf("Dog's name: %s\n", ptr_dog->name);
	printf("Dog's breed: %s\n", ptr_dog->breed);
	printf("Dog's age: %d\n", ptr_dog->age);
	printf("Dog's color: %s\n", ptr_dog->color);

	// 개의 이름을 jack으로 바꾸려면?
	//ptr_dog->name = "jack";
	 strcpy(ptr_dog->name, "jack");
	// strcpy() 함수를 사용해서 새로운 이름으로 바꿔야 한다.
	// because we can’t assign a string value directly to ptr_dog->name using assignment operator!

	// increasing age of dog by 1 year
	ptr_dog->age++;

	printf("Dog's new name is: %s\n", ptr_dog->name);
	printf("Dog's age is: %d\n", ptr_dog->age);

	return 0;
}
