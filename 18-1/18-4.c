#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();		// Ű���忡�� ���� �Է�
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);		// ȭ�鿡 ���� ���
	}

	return 0;
}
#endif