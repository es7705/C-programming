#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ���� �Ҵ� ������ �迭ó�� ����
	int* pi;					// ���� �Ҵ� ������ ������ ������
	int i, sum = 0;				// �ݺ� ���� ������ ���� ����

	pi = (int*)malloc(5 * sizeof(int));		// ���� ���� 20����Ʈ �Ҵ�
	if (pi == NULL)							// �޸𸮰� ������ ���� ���� ó�� ����
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)				// i�� 0���� 4���� �ټ� �� �ݺ�
	{
		scanf("%d", &pi[i]);				// �迭 ��ҿ� �Է�
		// scanf("%d", pi + i); �����ͷ� ��Ÿ������ ���� ����
		sum += pi[i];
	}

	printf("�ټ� ���� ��� ���� : %.1lf\n	", (sum / 5.0));		// ��� ���� ���
	free(pi);			// �Ҵ��� �޸� ���� ��ȯ
	return 0;
}
#endif