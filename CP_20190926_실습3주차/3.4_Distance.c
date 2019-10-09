#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int xpos;
	int ypos;
};

int main() {
	struct point pos1, pos2;
	double distance;

	//printf("point1 pos: ");
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	//printf("point2 pos: ");
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
		(pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

	//printf("두 점 사이의 거리 : %0.2f\n", distance);
	printf("%0.2f\n", distance);

	return 0;

}
