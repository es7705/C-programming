#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ �迭 ����� ���
	int i;
	char* pary[5];
	char* pary1[5] = { "�̿���", "������", "ȫ�¹�", "������", "������" };	// ������ �迭�� �ʱ�ȭ
	// �̶� ���ڿ��� ������ �޸� ������ ���� �����ǰ�, �迭 ��ҿ��� ���� ���ڿ��� �ּҰ� ����

	char ary[5][10] = { "�̿���", "������", "ȫ�¹�", "������", "������" };	// 2���� char �迭�� �ʱ�ȭ

	// ������ �迭���� �� ù ��° ������ �ּҰ� �����
	pary[0] = "dog";		// d�� �ּ�
	pary[1] = "elephant";	// e�� �ּ�
	pary[2] = "horse";		// h�� �ּ�
	pary[3] = "tiger";		// t�� �ּ�
	pary[4] = "lion";		// l�� �ּ�

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", *(pary + i));
		printf("%s\n", pary1[i]);
		printf("%s\n", ary[i]);
	}

	return 0;
}
#endif