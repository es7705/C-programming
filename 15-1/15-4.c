#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �迭 ����� �ּҿ� �迭�� �ּ�
	int ary[5];

	printf("ary�� �� : %u\t", ary);			// �ּҷμ��� �迭���� ��
	printf("ary�� �ּ� : %u\n", &ary);	    // �迭�� ��ü�� ���� �ּ�
	printf("ary + 1 : %u\t", ary + 1);		// �迭�� �� ��° ����� �ּ�
	printf("&ary + 1 : %u\n", &ary + 1);	// �迭 ��ü �ּ��� ������ �ּ�

	return 0;
}
#endif