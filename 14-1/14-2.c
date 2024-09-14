#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[][4] = {			// 2차원 배열의 선언과 초기화
		1, 2, 3, 4,		// 0행
		5, 6, 7, 8,		// 1행
		9, 10		// 2행
	};

	// int num[][4] = { {1}, {5, 6}, {9, 10, 11} };

	// int num[3][4] = { 1, 2, 3, 4, 5, 6 };

	// int num[3][4] = { 0 };

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}

	int c;
	c = sizeof(num) / sizeof(num[0]); // 행의 수
	printf("%d\n", c);

	return 0;
}
#endif