#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[80]; // 0 ~ 14���� ����, 15�� �� ����
	char str2[80]; // ������ ���ڿ� ������ ����
	int star_cnt = 0;

	printf("�ܾ� �Է� : ");
	scanf("%s", str1);

	int len = strlen(str1);	// �Է��� ���ڿ� ��
	printf("���ڿ� �� : %d\n", len);	// ���ڿ� �� ���

	strcpy(str2, str1);		// �Է��� ���ڿ��� str2�� ����, ���� �Է��� ����
	
	str1[15] = '\0';		// �ܾ��� �ִ� ���̴� 15�ڷ� ����, 16�� ° �迭�� �� ���ڸ� ����

	if (len > 5)			// �ܾ� ���̰� 5�ڸ� ������ 6�ڸ����� ���� ���
	{
		if (len < 16)		// �ܾ� ���̰� 15�� ���ϸ� ���ڿ� ������
		{
			for (int i = 5; i < len; i++) // 15��° �۱��� �� ���
			{
				str1[i] = '*';
				star_cnt++;				// �� ���� ī��Ʈ
			}
		}

		else				// �ܾ� ���̰� 16�� �̻��̸� 15�ڱ����� �� ���
		{
			for (int i = 5; i < 15; i++) // 15��° �۱��� �� ���
			{
				str1[i] = '*';
				star_cnt++;				// �� ���� ī��Ʈ
			}
		}
	}

	printf("�� ���� : %d\n", star_cnt);
	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s", str2, str1);
	return 0;
}
#endif