#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cnt = 0;		// �빮�� ī��Ʈ ����
	char ch;
	FILE* fp;
	fp = fopen("D:\\Study\\HonGong\\HonGong\\18-1\\pigs.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}
	printf("������ ���Ƚ��ϴ�.\n");
	while (1)
	{
		ch = fgetc(fp);
		if (ch >= 'A' && ch <= 'Z')
		{
			++cnt;
		}
		else if (ch == EOF)		// ������ �� EOF(End of File)
		{
			break;
		}	
		printf("%c", ch);
	}
	printf("\n\n�빮�� ���� : %d\n", cnt);

	fclose(fp);
	return 0;
}
#endif