#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// scanf �Լ��� ����� ���ڿ� �Է�
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);		// apple jam�� �Է�, ���͸� ������ ���� ���� ���������� ����
	printf("ù ��° �ܾ� : %s\n", str);	// apple ���
	scanf("%s", str);			// ���ۿ� ���� �ִ� jam�� �Էµ�
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str); // jam ���

	return 0;
}
#endif