#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

int main(void)
{
	// ���ڿ��� ���ϴ� strcmp, strncmp �Լ�
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");

	if (strcmp(str1, str2) > 0)
	{
		printf("%s", str1);
	}
	else
	{
		printf("%s", str2);
	}
	printf("\n");

	if (strncmp(str1, str2, 3) == 0)
	{
		printf("����.\n");
	}
	else
	{
		printf("�ٸ���.\n");
	}
	return 0;
}
#endif