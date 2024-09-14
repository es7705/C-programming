#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_month(int* pa);

int main(void)
{
	// 2 
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	print_month(month);
	 
	return 0;
}

void print_month(int* pa)		// 배열명을 저장할 포인터
{
	int i;

	for ( i = 0; i < 12; i++)		// 출력 열두 번 반복
	{																
		printf("%5d", pa[i]);	// 각 달의 일수 출력
		if ((i + 1) % 5 == 0)	// 출력 개수가 5의 배수면 줄 바꿈
		{
			printf("\n");
		}
	}
}
#endif