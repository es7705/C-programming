#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* sum(int a, int b);	// �ּҸ� ��ȯ�ϴ� �Լ�

int main(void)
{
	// �ּҸ� ��ȯ�ؼ� �� ������ �� ���
	int* rp;

	rp = sum(10, 20);	// �ּҸ� ����, ���ϰ��� res�� �ּ���
	printf("�� ������ �� : %d\n", *rp);	// �������Ͽ� res�� ���� ���
	return 0;
}

int* sum(int a, int b)
{
	static int res;	// ���� ���� ����, �Լ��� ��ȯ�� �Ŀ��� ������ ���� ������ ��� �����Ǳ� ���� ���
	res = a + b;
	return &res;	// �ּҸ� ��ȯ
}
#endif