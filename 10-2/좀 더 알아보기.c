#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa);

int main(void)
{
	int ary[5] = { 1,2,3,4,5 };
	print_ary(ary);
	return 0;
}

void print_ary(int pa[5])		// �Լ��� �Ű����� �ڸ��� �迭�� �����ϸ� �迭�� ���� ������ �Ҵ���� ������,
{								// �迭���� ������ �������� ù ��° �迭 ��Ҹ� ����Ű�� �����ͷ� �ٲ�
	int i;					    // �Ű����� �ڸ��� ����� �迭���� �迭 ����� ������ �ǹ̰� ������ ������ ����
	for (i = 0; i < 5; i++)		// �����Ϸ��� �迭���� �ڵ����� �����ͷ� �ٲٰ� ��� �迭 ��Ҹ� ����� �� �ֵ��� ������ ������ ����
	{
		printf("%d ", pa[i]);
	}
}
#endif