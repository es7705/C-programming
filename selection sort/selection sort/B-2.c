#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main(void)
{
	int a[SIZE] = { 3, 2, 1, 6, 5 };
	int i, j, temp;
	int min;

	for ( i = 0; i < SIZE - 1; i++)			// 가장 작은 값을 구하는 과정 반복 횟수
	{
		min = i;							// i가 가장 작은 값으리 첨자라고 가정
		for ( j = i + 1; j < SIZE; j++)		// 첫 번째 비교 대상은 기준 요소 다음부터 시작
		{
			if (a[min] > a[j])				// 가장 작은 값이 a[j]보다 크면
			{
				min = j;					// j가 가장 작은 값의 첨자가 된다.
			}
		}
		if (min != i)						// 가장 작은 값의 위치가 바뀌었으면, min과 i의 값이 같지 않으면
		{
			temp = a[i];		// 3
			a[i] = a[min];		// [0] = [2] == 1 > a[0] = 1
			a[min] = temp;		// a[2] = 3
		}
	}

	for ( i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
#endif