#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_str(char** pps, int cnt);

int main(void)
{
	// ���� ������ Ȱ�� 2 : ������ �迭�� �Ű������� �޴� �Լ�
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // �ʱ�ȭ
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	printf("%d\n", count);
	print_str(ptr_ary, count); // ptr_ary[] �迭�� ù ��° �ּҸ� �Ѱ���

	return 0;
}

void print_str(char** pps, int cnt) // ptr_ary[]�� ù ��° �ּҸ� �Ű� ������ ����
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

#endif