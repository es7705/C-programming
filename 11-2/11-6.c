#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_gets(char* str, int size);	// size = 7

int main(void)
{
	char str[7];		// ������ ������ �迭, ���� 6������ ����

	my_gets(str, sizeof(str)); // �� �� ���ڿ��� ����ϴ� �Լ�(�ּ�, �迭�� ũ��) 
	printf("�Է��� ���ڿ� : %s\n", str);	// �Է��� ���ڿ� ���, ���� 6������ ���


	return 0;
}

void my_gets(char* str, int size) // str�� char �迭, size�� �迭�� ũ��
{
	int ch;	// gethar �Լ��� ��ȯ���� ������ ����
	int i = 0; // str �迭�� ÷��

	ch = getchar();	// ù ���� ���� �Է�
	while ((ch != '\n') && (i < size - 1)) // ch�� ���๮�ڰ� �ƴϸ� && i�� 5���� �ֳĸ� 6�϶� �� ���ڸ� �־�� �ϴϱ�
	{
		str[i] = ch;	// �Է��� ���ڸ� �迭�� ����
		i++;			// ÷�� ����
		ch = getchar();		// ���ο� ���� �Է�
	}
	str[i] = '\0';	// i = 6�� �� �Էµ� ���ڿ��� ���� �� ���ڸ� ����
}

#endif