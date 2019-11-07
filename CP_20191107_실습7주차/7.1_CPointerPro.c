#include <stdio.h>
#include <stdlib.h>

void allocateArray(int* arr, int size, int value)
{
	arr = (int*)malloc(size * sizeof(int));
	if (arr != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			*(arr + i) = value;
		}
	}
}

int main()
{
	int* vector = NULL;
	int size = 0;
	int value = 0;
	scanf_s("%d %d", &size, &value);
	allocateArray(&vector, size, value);
	for (int i = 0; i < size; i++)
		printf("%d ", vector[i]);
	return 0;
}





/*
정상 출력되지 않는 이유는 vector 변수가 함수로 전달될 때,
매개변수 arr로 복사되어 전달되기 때문이며, arr에 대한 변경은 vector에 전혀 영향을 미치지 않는다.
함수가 반환되면 arr 변수에 저장된 값은 vector 변수로 복사되지 않는다.

malloc이 호출 된 후 allocateArray 함수에서 변수 arr은 새롭게 할당된 힘 메모리 영역을 가리키도록 수정된다.
함수가 반환된 이후에는 함수 내에서 할당된 메모리의 주소를 잃어버려 메모리 누수가 발생한다.
*/