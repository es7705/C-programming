#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ ������ ������ �ϴ� �ܿ�
	int num, grade;		// �й��� ������ ������ ����

	printf("�й� �Է� : ");
	scanf("%d", &num);	// �й� �Է�
	getchar();			// ���ۿ� ���� �ִ� ���� ���� ����
	printf("���� �Է� : ");
	grade = getchar();	// ���� �Է�
	printf("�й� : %d, ���� : %c\n", num, grade);

	return 0;
}
#endif