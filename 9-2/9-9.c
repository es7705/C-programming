#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	// ������ ���� �μ��� �ִ� ���
	int a = 10, b = 20;

	swap(a, b);
	printf("a : %d, b : %d\n", a, b);
	return 0;
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

#endif