#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int, int);

int main(void)
{
	// �Լ� �������� ����
	int (*fp)(int, int);	// �Լ� ������ ����
	int res;				// ��ȯ���� ������ ����

	fp = sum;				// �Լ����� �Լ� �����Ϳ� ����
	res = fp(10, 20);		// �Լ� �����ͷ� �Լ� ȣ��
	res = (*sum)(10, 20);

	printf("result : %d\n", res);	// ��ȯ�� ���

	return 0;
}

int sum(int a, int b)		// �Լ� ����
{
	return (a + b);
}
#endif