#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void add_ten(int* pa);

int main(void)
{
	// ���� �����ؼ� �����ϴ� ���
	int a = 10;

	add_ten(&a); // a ���� �����Ͽ� ����
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int* pa) // 8���� a�� �ٸ� �������� ���� ���� �Ҵ�
{
	*pa = *pa + 10;
}
#endif