#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DEBUG								// DEBUG ��ũ�� ����
// #define LEVEL 2							// LEVEL ��ũ�θ� 2�� ġȯ
#define MAX_LEVEL							// MAX_LEVEL ��ũ�� ����

int main(void)
{
	int flag;								// �÷��� ����

#undef DEBUG								// DEBUG ��ũ�� ���� ����
#ifndef DEBUG								// DEBUG ��ũ�� ���ǰ� �� �Ǿ� ������
	flag = 0;								// �� ���� ������
#elif LEVEL == 1							// LEVEL ��ũ�ΰ� 1�̸� 
	flag = 1;								// �� ���� ������
#elif defined(MAX_LEVEL) && (LEVEL == 2)	// MAX_LEVEL ��ũ�ΰ� ���� �Ǿ� �ְ� LEVEL ��ũ�ΰ� 2�̸�
	flag = 2;								// �� ���� ������
#else										// ���� �� �ƴϸ�
	flag = 3;								// �� ���� ������
#endif
	printf("%d\n", flag);					// �÷��� ���� ���

	return 0;
}
#endif