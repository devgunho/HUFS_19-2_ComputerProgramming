#include <stdio.h>

int main()
{
	printf("정수 형식의 크기 확인\n");
	printf("char : %d \n", sizeof(char));
	printf("unsigned char : %d \n", sizeof(unsigned char));
	printf("short : %d \n", sizeof(short));
	printf("unsigned : %d \n", sizeof(unsigned short));
	printf("int : %d \n", sizeof(int));
	printf("unsigned int : %d \n", sizeof(unsigned int));
	printf("long : %d \n", sizeof(long));
	printf("unsigned long : %d \n", sizeof(unsigned long));
	printf("long long : %d \n", sizeof(long long));
	printf("double long : %d \n", sizeof(double long));

	return 0;
}