#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 여러 개의 1차원 배열을 2차원 배열처럼 사용
	int ary1[4] = { 1, 2, 3, 4 };			// 1차원 배열과 선언과 초기화
	int ary2[5] = { 11, 12, 13, 14 };
	int ary3[5] = { 21, 22, 23, 24, 25 };
	int* pary[3] = { ary1, ary2, ary3 };	// 포인터 배열에 각 배열명 초기화
	int i, j;								// 반복 제어 변수

	for (i = 0; i < 3; i++)					// 3행 반복
	{
		for (j = 0; j < 5; j++)				// 4행 반복
		{
			printf("%5d", pary[i][j]);		// 2차원 배열처럼 출력, 배열 표현식
			//printf("%5d", *(pary[i] + j));	// 포인터 표현식
		}
		printf("\n");
	}

	printf("%5d", pary[2][2]);				// 배열 표현식
	printf("%5d", *(pary[2] + 2));			// 포인터 표현식
	return 0;
}
#endif