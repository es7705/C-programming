#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 3���� �迭
	int score[2][3][4] = { // 2�� �� 3���� 4���� ���� ����
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++) // ���� �ݺ�
	{
		printf("%d�� ����...\n", i + 1); // 1��, 2��
		for (j = 0; j < 3; j++) // 3���� �л��� �ݺ�
		{
			for (k = 0; k < 4; k++) // 4������ ������ �ݺ�
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
#endif