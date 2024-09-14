#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2차원 배열의 다양한 초기화 방법
	int num[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int cnt = sizeof(num) / sizeof(num[0]);					// 전체 배열의 크기 48 / 행의 크기 16 = 3
	printf("행의 수 : %d\n", cnt);							// 3
	printf("배열의 전체 크기 : %d\n", sizeof(num));			// 48 
	printf("행의 크기 : %d\n", sizeof(num[0]));				// 16	
	printf("요소 하나의 크기 : %d\n", sizeof(num[0][0]));	// 4
	printf("\n");

	int i, j;

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif