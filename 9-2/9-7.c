#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* pa, int* pb);	// �� ������ ���� �ٲٴ� �Լ��� ����

int main(void)
{
	// �����͸� ����� �� ������ �� ��ȯ
	int a = 10, b = 20;		// ���� ����� �ʱ�ȭ

	swap(&a, &b);			// a, b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("a : %d, b : %d\n", a, b);	// ���� a, b ���

	return 0;
}

void swap(int* pa, int* pb) // �Ű������� ������ ����
{
	int temp;	// ��ȯ�� ���� �ӽ� ����

	temp = *pa;	// temp�� pa�� ����Ű�� ������ �� ����
	*pa = *pb;  // pa�� ����Ű�� ������ pb�� ����Ű�� ������ �� ����
	*pb = temp;	// pb�� ����Ű�� ������ temp �� ����
}

#endif