#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ ������ ���� ����
	int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary; // 10
	int* pb = pa + 3; // 40

	printf("pa : %u\n", pa); // 100
	printf("pb : %u\n", pb); // 112

	pa++;	// 104
	printf("pb - pa : %u\n", pb - pa); // (112 - 104) / sizeof(int)4 -> 2
	// ���� ����� �迭 ��� ���� ���� ���̸� �ǹ�

	printf("�տ� �ִ� �迭 ����� �� ��� : ");
	if (pa < pb)
	{
		printf("%d\n", *pa); // 20
	}

	else
	{
		printf("%d\n", *pb); // 40
	}

	return 0;
}
#endif