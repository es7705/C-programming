#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[][4] = {			// 2���� �迭�� ����� �ʱ�ȭ
		1, 2, 3, 4,		// 0��
		5, 6, 7, 8,		// 1��
		9, 10		// 2��
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
	c = sizeof(num) / sizeof(num[0]); // ���� ��
	printf("%d\n", c);

	return 0;
}
#endif