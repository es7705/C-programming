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

void print_month(int* pa)		// �迭���� ������ ������
{
	int i;

	for ( i = 0; i < 12; i++)		// ��� ���� �� �ݺ�
	{																
		printf("%5d", pa[i]);	// �� ���� �ϼ� ���
		if ((i + 1) % 5 == 0)	// ��� ������ 5�� ����� �� �ٲ�
		{
			printf("\n");
		}
	}
}
#endif