#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[3][4]; // 3���� �� ���� ������ ������ 2���� �迭 ����
	int total; // ���� 
	double avg; // ���
	int i, j; // �ݺ� ���� ����

	for (i = 0; i < 3; i++) // �л� ����ŭ �ݸ�
	{
		printf("4������ ���� �Է� : ");
		for (j = 0; j < 4; j++) // ���� ����ŭ �ݺ�c
		{
			scanf("%d", &score[i][j]); // ���� �Է�
		}
	}

	for (i = 0; i < 3; i++) // �л� ����ŭ �ݺ�A
	{
		total = 0; // �л��� �ٲ� ������ 0���� �ʱ�ȭ
		for (j = 0; j < 4; j++)
		{
			total = total + score[i][j]; // ����� �� ����
		}
		avg = total / 4.0; // 3�� �ݸ�
		printf("���� : %d, ��� : %.2lf\n", total, avg); // 3�� �ݸ�
	}

	return 0;
}
#endif