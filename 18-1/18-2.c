#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ ������ ȭ�鿡 ����ϱ�
	FILE* fp;
	int ch;		// putchar�� ��ȯ���� int, int putchar(int);

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);		// �ƽ�Ű �ڵ带 ����

		if (ch == EOF)
			break;
		//printf("%c", ch);
		putchar(ch);		// �Է��� ���ڸ� ȭ�鿡 ���, ch�� �ƽ�Ű �ڵ带 ���ڷ� ��ȯ �ؼ� ���
	}

	fclose(fp);
	return 0;
}
#endif