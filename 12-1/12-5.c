#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

int main(void)
{
	//fgets �Լ��� ����� ���ڿ� �Է�
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);		// ���ڿ� �Է�, (�迭��, �迭�� ũ��, ǥ�� �Է�)
	// ����(���� ����)�� ���� �ͱ��� ���� �Ǿ apple jam�� �ͷµǰ� �ٷ� ���� �ٲ�
	str[strlen(str) - 1] = '\0';		// ���� ���� ���� 
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str); // ���ڿ� ���
	
	return 0;
}
#endif