#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void assign10(void);
void assign20(void);

int a; // ���� ���� ����, ���� ������ �ʱ�ȭ ���� �ʾƵ� 0���� �ڵ� �ʱ�ȭ ��

int main(void)
{
	// ���� ����
	printf("�Լ� ȣ�� �� a �� : %d\n", a); // a : 0

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a �� : %d\n", a); // ���� ���� a ���, a : 10

	return 0;
}

void assign10(void)
{
	a = 10; // ���� ���� a�� 10 ����
}

void assign20(void)
{
	int a;	// ���� ������ ���� �̸��� ���� ���� ����

	a = 20; // ���� ���� a�� 20 ����
}
#endif