#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana"; // �迭�� ù ��° ����� b�� �ּҸ� ����
	char* ps2 = str2; // �迭���� �迭�� ù ��° ����� �ּ��̴�. ��, a�� �ּ�

	printf("���� ���ڿ� : %s\n", str1);	// strawberry, ���⵵ str1 �迭�� ù ��° ����� s�� �ּ�

	strcpy(str1, str2);	// �ٸ� char �迭�� ���ڿ� ����, str2�� a�� �ּ�
	printf("�ٲ� ���ڿ� : %s\n", str1);	// apple

	strcpy(str1, ps1);					// �����Ϳ� ����Ǿ� �ִ� b�� �ּ�
	printf("�ٲ� ���ڿ� : %s\n", str1);	// banana

	strcpy(str1, ps2);					// �����Ϳ� ���� �Ǿ� �ִ� str2�� �ּ�. ��, a�� �ּ�
	printf("�ٲ� ���ڿ� : %s\n", str1);	// apple

	strcpy(str1, "banana");				// b�� �ּ�
	printf("�ٲ� ���ڿ� : %s\n", str1);	// banana

	return 0;
}
#endif