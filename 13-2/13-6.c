#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_ten(int a);

int main(void)
{
	// ���� �����ؼ� �����ϴ� ���
	int a = 0;

	a = add_ten(a); // a ���� �����Ͽ� ����
	printf("main �Լ������� a : %d\n", a);

	return 0;
}

int add_ten(int a) // 8���� a�� �ٸ� �������� ���� ���� �Ҵ�
{
	a = a + 10; // 16���� �Ű����� a�� 10�� ���Ѵ�.
	printf("add_ten �Լ������� a : %d\n", a);
	return a;
}
#endif