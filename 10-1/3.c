#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �����͸� �̿��� �迭�� �� ���
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	for ( i = 0; i < 3; i++)
	{
		scanf("%d", pa);
		pa++;
	}

	pa = ary; // �����͸� �迭�� ���� �ּҷ� �ٽ� �ʱ�ȭ
	
	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(pa++));
		// pa++; // pa�� 100����
		// 104 108 
		// pa�� ary�� ù ��° ����� �ּ�
	}
	
	return 0;
}
#endif