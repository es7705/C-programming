#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �����Ϳ� ���� ���� ������
	int a;
	int* pa;

	pa = &a;
	*pa = 10;	// �����ͷ� ���� a�� 10 ����

	printf("�����ͷ� a �� ��� : %d\n", *pa);
	printf("���������� a �� ��� : %d\n", a);

	return 0;
}
#endif