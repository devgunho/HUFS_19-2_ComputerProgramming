#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int input = 0, size=0;
	int* arr;
	int* cpyArr;

	cpyArr = (int*)malloc(sizeof(int) * size);
	// size가 0인 cpyArr 할당

	while (1)
	{
		arr = (int*)malloc(sizeof(int) * (size+1));
		// cpyArr값을 복사 받기 위해 cpyArr보다 1큰 공간 할당
		for (int i = 0; i < size; i++)
		{
			arr[i] = cpyArr[i];
		}

		scanf("%d", &input);
		if (input == -1)
		{
			free(cpyArr);
			break;
		}
		if (input < 0 || input>500)
			continue;
		else
		{
			size++;
			cpyArr = (int*)malloc(sizeof(int) * size);
			for (int j = 0; j < size; j++)
			{
				cpyArr[j] = arr[j];
			}
			cpyArr[size - 1] = input;
		}
	}
	scanf("%d", &n);
	printf("%d", arr[n-1]);
	free(arr);
}