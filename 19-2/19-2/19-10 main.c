#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "19-10 point .h"
#include "19-10 line.h"

int main(void)
{
	Line a = { {1, 2}, {5, 6} };
	Point b;
	printf("first : %d %d\n", a.first.x, a.first.y);
	printf("second : %d %d\n", a.second.x, a.second.y);
	b.x = (a.first.x + a.second.x) / 2;
	b.y = (a.first.y + a.second.y) / 2;
	printf("선의 가운데 정의 좌표 : (%d, %d)", b.x, b.y);
	return 0;
}
#endif