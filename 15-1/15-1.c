#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10;		// int�� ������ ����� �ʱ�ȭ
	int* pi;		// ������ ����
	int** ppi;		// ���� ������ ���� 

	pi = &a;		// int�� ������ �ּҸ� ������ ������
	ppi = &pi;		// �������� �ּҸ� ������ ���� ������

	printf("------------------------------------------------------\n");
	printf("����      ������      &����        *����      **����\n");
	printf("------------------------------------------------------\n");
	printf("  a%12d%12u\n", a, &a); // a�� ��,  a�� �ּ� 
	printf(" pi%12u%12u%12d\n", pi, &pi, *pi); // a�� �ּ�, pi�� �ּ�, pi�� ����Ű�� �ּ��� ��(a�� ��)
	printf("ppi%12u%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi); // pi�� �ּ�, ppi�� �ּ�, pi�� ���� ��(a�� �ּ�), a�� ��
	printf("------------------------------------------------------\n");

	return 0;
}
#endif