#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �빮�ڸ� �ҹ��ڷ� ���� (�빮�ڿ� �ҹ��ڴ� 32����)
	char small, cap = 'G';			// char�� ���� ����� �ʱ�ȭ

	if ((cap > 'A') && (cap <= 'Z'))	// �빮�� �������
	{
		small = cap + ('a' - 'A'); // 103 = 71 + (97 - 65)
	}	// ��/ �ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ

	printf("�빮�� : %d %c", cap, '\n');	// '\n'�� %c�� ����ϸ� ���� �ٲ��.
	printf("�ҹ��� : %d", small);

	return 0;
}
#endif