#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���� ���� 1���� �迭�� 2���� �迭ó�� ���
	int ary1[4] = { 1, 2, 3, 4 };			// 1���� �迭�� ����� �ʱ�ȭ
	int ary2[5] = { 11, 12, 13, 14 };
	int ary3[5] = { 21, 22, 23, 24, 25 };
	int* pary[3] = { ary1, ary2, ary3 };	// ������ �迭�� �� �迭�� �ʱ�ȭ
	int i, j;								// �ݺ� ���� ����

	for (i = 0; i < 3; i++)					// 3�� �ݺ�
	{
		for (j = 0; j < 5; j++)				// 4�� �ݺ�
		{
			printf("%5d", pary[i][j]);		// 2���� �迭ó�� ���, �迭 ǥ����
			//printf("%5d", *(pary[i] + j));	// ������ ǥ����
		}
		printf("\n");
	}

	printf("%5d", pary[2][2]);				// �迭 ǥ����
	printf("%5d", *(pary[2] + 2));			// ������ ǥ����
	return 0;
}
#endif