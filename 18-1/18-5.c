#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// stdin�� stdout�� ����� ���� �����
	int ch;

	while (1)
	{
		ch = fgetc(stdin);			// Ű���忡�� ���� �Է��� �޾Ƽ�
		if (ch == EOF)
		{
			break;					// ctrl + z�� �Է� ����
		}
		fputc(ch, stdout);			// ȭ�鿡 ���� ���
	}
	return 0;
}
#endif