#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// ���� �Ҵ��� ����� ���ڿ� ó��, 16-5 ���� ������(NULL ���)
	char temp[80];									// �ӽ� char �迭
	char* str[3] = { 0 };							// ���� �Ҵ� ������ ������ ������ �迭
	int i = 0;										// �ݺ� ���� ����

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);									// ���ڿ� �Է�
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);	// ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp);						// ���� �Ҵ� ������ ���ڿ� ����	
	}
	// ���⼭ i�� 3�� �ȴ� 

	/*for (i = 0; str[i] != NULL; i++)				// ������ �迭 ���ڿ� ���, for�� ���
	{
		printf("%s\n", str[i]);						// �Էµ� ���ڿ� ���
	}*/

	int j = 0;
	while (j < i)									// ������ �迭 ���ڿ� ���, i == 3,  while�� ���
	{
		printf("%s\n", str[j]);
		j++;
	}

	for (j = 0; j < i; j++)							// ������ �κ�,i == 3
	{
		free(str[j]);								// ���� �Ҵ� ���� ��ȯ
	}

	return 0;
}
#endif
