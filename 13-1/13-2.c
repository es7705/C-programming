#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//��� �ȿ��� ����ϴ� ���� ����
	int a = 10, b = 20;
	
	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{
		int a = 1, b = 3, temp;

		temp = a;
		a = b;
		b = temp;
		printf("�� �ȿ����� a�� b�� �� : %d, %d\n", a, b);

	}
	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	return 0;
}
#endif