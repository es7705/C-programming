#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	// �� ���ڿ� �� ���̰� �� �ܾ� ���
	char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);

	int a = strlen(str1); // ���� ���� ���� ��ȯ
	printf("%d\n", a);

	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}

	else
	{
		resp = str2;
	}

	printf("�̸��� �� ������ : %s\n", resp);
	return 0;
}
#endif