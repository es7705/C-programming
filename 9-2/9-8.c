#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(void);

int main(void)
{
	// 다른 함수의 변수 사용하기
	int a = 10, b = 20;

	swap();
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(void)
{
	int temp;
	temp = a;
	a = b;
	b = a;
}
#endif