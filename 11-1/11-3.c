#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// getchar �Լ��� putchar �Լ� ���
	int ch;						// �Է� ���ڸ� ������ ����
	ch = getchar();				// �Լ��� ��ȯ�ϴ� ���ڸ� �ٷ� ����, ��ȯ���� int����
	printf("�Է��� ���� : ");
	putchar(ch);				// �Է��� ���� �߷�
	putchar("\n");				// ���� ���� ���, ����� ���ڸ� �ٽ� ��ȯ, ��� �������� ������ �߻��ϸ� -1�� ��ȯ
	return 0;
}
#endif