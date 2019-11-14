#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
	int zpos;
} Point;

void SwapXZ(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SwapPoint2Point(Point* ptr1, Point* ptr2) {
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	Point pos1, pos2;

	scanf("%d %d %d", &pos1.xpos, &pos1.ypos, &pos1.zpos);
	scanf("%d %d %d", &pos2.xpos, &pos2.ypos, &pos2.zpos);

	SwapPoint2Point(&pos1, &pos2);

	printf("[%d, %d, %d]\n", pos1.xpos, pos1.ypos, pos1.zpos);
	printf("[%d, %d, %d]\n", pos2.xpos, pos2.ypos, pos2.zpos);

	SwapXZ(&pos1.xpos, &pos1.zpos);
	printf("[%d, %d, %d]\n", pos1.xpos, pos1.ypos, pos1.zpos);

	return 0;
}
