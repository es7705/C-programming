#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa); // 매개변수로 포인터를 줌

int main(void)
{
	// 배열을 처리하는 함수
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); // 배열명은 첫 번째 배열 요소의 주소

	return 0;
}

void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", *(pa + i));
		printf("%5d", pa[i]);
	}
}
#endif