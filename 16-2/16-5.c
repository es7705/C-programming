#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** pps);					// ���� �Ҵ� ������ ���ڿ��� ����ϴ� �Լ�

int main(void)
{
	// ���� �Ҵ� ������ ������ ���ڿ��� �Լ��� ó���ϴ� ��
	char temp[80];				// �ӽ� char �迭
	char* str[21] = { 0 };		// ���ڿ��� ������ ������ �迭, �� �����ͷ� �ʱ�ȭ
	int i = 0;					// �ݺ� ���� ����

	while (i < 20)				// �ִ� 20���� �Է�
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);									// ���ڿ� �Է�
		if (strcmp(temp, "end") == 0) break;		// end�� �ԷµǸ� �ݺ� ����
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}

	return 0;
}

void print_str(char** pps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}

#endif