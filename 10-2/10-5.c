#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa); // �Ű������� �����͸� ��

int main(void)
{
	// �迭�� ó���ϴ� �Լ�
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); // �迭���� ù ��° �迭 ����� �ּ�

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