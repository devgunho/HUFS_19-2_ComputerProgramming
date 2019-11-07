/*
포인터가 함수로 전달되면, 포인터는 값에 의해 함수로 전달된다.
만약 호출된 함수 내에서 포인터의 복사본에 대한 수정이 아닌 포인터 자체의 수정을 원한다면,
포인터의 포인터를 전달해야 한다.

예제에서는 정수 배열에 대한 포인터가 인자로 전달되며, 해당 포인터는 함수 내에서 메모리가 할당되고 초기화된다.
그리고 함수는 할당된 메모리를 첫 번째 매개 변수를 통해 반환한다.
함수에서 먼저 메모리를 할당하고 초기화한다.
이 할당된 메모리의 주소는 의도적으로 정수 포인터에 할당된다.
호출하는 함수에서 할당된 이 포인터를 수정하려면,
호출 시 포인터의 주소를 전달해야 한다.
따라서 함수의 매개변수는 정수에 대한 포인터의 포인터로 선언되어 있고,
호출 함수는 포인터의 주소를 전달해야 한다.
*/



#include <stdio.h>
#include <stdlib.h>

void allocateArray(int** arr, int size, int value)
{
	*arr = (int*)malloc(size * sizeof(int));
	if (arr != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			*(*arr+i) = value;
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
allocateArray 함수에 대한 첫 번째 매개변수로 정수 포인터의 포인터가 전달되며,
함수를 호출할 때 정수 포인터의 포인터 타입의 값을 전달해야 한다.
위 코드에서는 vector 변수의 주소를 전달하고 있다.
malloc 함수가 반환한 할당된 메모리의 주소는 arr 변수를 참조하여 할당하며,
정수 포인터의 포인터에 대한 역참조는 곧 정수 포인터가 된다.
정수 포인터는 곧 vector의 주소이기 때문에 vecotor의 값 자체를 수정할 수 있게 된다.
*/