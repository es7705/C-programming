#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���ڿ� ����� �ּҶ� ����
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple"); // a�� �ּ� ��, ù ��° ���� �ּ� �� ���
	printf("�� ��° ������ �ּ� ��  : %p\n", "apple" + 1); // p�� �ּ� ��, �ι� ° ���� �ּ� �� ���
	printf("ù ��° ���� : %c\n", *("apple"));			 // ���� ���� �������� a���
	printf("�� ��° ���� : %c\n", *("apple" + 1));		 // ������ ��������� p ���
	printf("�迭�� ǥ���� �� ��° ���� %c\n", "apple"[2]); // p, �迭 ǥ����

	return 0;
}
#endif