#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2���� char �迭
	char animal[5][20]; // 2���� char �迭 ����, 5������ ������ 20 ���� �̳��� �̸�
	int i; // �ݺ� ���� ����
	int count;	// ���� ���� ������ ����

	count = sizeof(animal) / sizeof(animal[0]); // ���� �� ���
	for (i = 0; i < count; i++) // ���� ����ŭ �ݸ�
	{
		scanf("%s", animal[i]); // ���ڿ� �Է� i : 0 ~ 5
		// ���ڿ� �Է�, �ּ� ������ &�� ���� �ʿ䰡 ����
		// animal[0]�� �迭������ �κй迭�� ���� ��ġ ���̴�
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]); // �Էµ� ���ڿ� ���
	}

	return 0;
}
#endif