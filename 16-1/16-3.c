#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// ��Ÿ ���� �Ҵ� �Լ�
	int* pi;			// �Ҵ��� ���� ������ ������ ������
	int size = 5;		// �� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
	int count = 0;		// ���� �Էµ� ��� ����
	int num;			// ����� �Է��� ����
	int i;				// �ݺ� ���� ����

	pi = (int*)calloc(size, sizeof(int));		// ���� 5���� ���� ���� �Ҵ�
	while (1)
	{
		printf("����� �Է��ϼ��� : ");
		scanf("%d", &num);						// ������ �Է�
		if (num <= 0) break;					// 0 �Ǵ� �����̸� ����7
		if (count == size)						// ���� ��� ����ϸ�
		{
			size += 5;							// ũ�⸦ �÷��� ���Ҵ�
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);					// �Է��� ������ ���
	}

	free(pi);									// ���� �Ҵ� ���� ���� �ݳ�

	return 0;
}
#endif