// 정수배열과 포인터의 관계

#include <stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	printf(" size of a = %d, size of int = %d \n\n", sizeof(a), sizeof(int));

	int n = sizeof(a) / sizeof(int);
	int i;
	int* p = a;

	printf(" a = %d, p = %d  \n\n", a, p);
	// 배열은 결국 포인터로 구현된다는 것을 알 수 있다.

	for (i = 0; i < n; i++)
	{
		//printf(" a[%d]  ==> %d 주소 ==> %d \n", i, a[i], &a[i]);
		//printf(" p[%d]  ==> %d 주소 ==> %d \n", i, p[i], &p[i]);
		//printf(" *(a+%d)  ==> %d 주소 ==> %d \n", i, *(a+i), a+i);
		printf(" *(p+%d)  ==> %d 주소 ==> %X \n", i, *(p + i), p + i);
	}

	//값 변경
	a[0] = 255;
	a[1] = 256;
	a[2] = 257;
	a[3] = 258;
	a[4] = 259;

	return 0;
}