#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fp;									// ���� ������ ����
	char *str;									// ����� ���ڿ��� �����Ҵ��� ������
	int i = 0;										// �ݺ� ���� ����

	printf("���ڸ� �Է��ϼ��� : ");
	str = (char*)malloc(20);					// 20����Ʈ��ŭ str�� ���� �Ҵ�
	if (str == NULL)							// ���� �Ҵ� ���н� 
	{
		printf("�޸� �Ҵ翡 ����\n");
		return 1;
	}

	fgets(str, 20, stdin);						// ���ڿ� �Է�
	str[strcspn(str, "\n")] = '\0';				// ���� ���� ����

	fp = fopen("b.txt", "w");					// ���� �������� ����
	if (fp == NULL)								// ���� ���� Ȯ��
	{
		printf("������ ������ ���߽��ϴ�.\n");
		free(str);
		return 1;
	}

	while (str[i] != '\0')						// �ι��ڰ� ������ ������ ���� ���
	{
		fputc(str[i], fp);						// ���ڸ� ���Ͽ� ���
		i++;									// ���� ���ڷ� �̵�
	}
	fputc('\n', fp);							// �� �ٲ�

	char c[] = "hello";
	fputs(c, fp);

	fclose(fp);									// ���� �ݱ�
	free(str);									// �޸� ����
	return 0;
}
#endif