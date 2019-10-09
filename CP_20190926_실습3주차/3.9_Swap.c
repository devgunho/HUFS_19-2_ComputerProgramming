#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b * (*b);
	*b = temp * temp;
}

int main() {
	int a, b;
	int plus, min, multi;
	float divi;

	//printf("input the two numbers : ");
	scanf("%d %d", &a, &b);

	swap(&a, &b);

	plus = a + b;
	min = a - b;
	multi = a * b;
	divi = (double)a / (double)b;

	printf("swap : %d %d\n", a, b);

	printf("%d\n", plus);
	printf("%d\n", min);
	printf("%d\n", multi);
	printf("%0.2f\n", divi);

	return 0;
}