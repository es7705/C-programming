#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// gets �Լ��� ����� ���ڿ� �Է�
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);	// �迭���� �ְ� �Լ� ȣ��
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	// gets�� ���� ��
	/*char str[80];
	char ch;
	int i = 0;

	ch = getchar();
	while (ch != '\n')
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
	printf("%s", str);*/

	return 0;
}
#endif