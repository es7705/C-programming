#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker a;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d%d", &(a.price), &(a.calories));
	printf("�ٻ���� ���� : %d��\n", a.price);
	printf("�ٻ���� ���� : %dkcal\n", a.calories);

	return 0;
}
#endif