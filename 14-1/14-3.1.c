#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2���� �迭�� �پ��� �ʱ�ȭ ���
	int num[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int cnt = sizeof(num) / sizeof(num[0]);					// ��ü �迭�� ũ�� 48 / ���� ũ�� 16 = 3
	printf("���� �� : %d\n", cnt);							// 3
	printf("�迭�� ��ü ũ�� : %d\n", sizeof(num));			// 48 
	printf("���� ũ�� : %d\n", sizeof(num[0]));				// 16	
	printf("��� �ϳ��� ũ�� : %d\n", sizeof(num[0][0]));	// 4
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