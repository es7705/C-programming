#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VER 6				// ġȯ�� �κ��� �ִ� ��ũ�θ� ����	
#define BIT16				// ġȯ�� �κ��� ���� ��ũ�θ� ����
int main(void)
{
	int max;

#if VER >= 6									 // ��ũ�� �� VER�� 6 �̻��̸�
	printf("������ 6���� �����ϴ� : %d\n", VER);	 // �� ���� ������
#elif VER >= 4									 // ��ũ�� �� VER�� 4 �̻��̸� 
	printf("������ 4���� �����ϴ�. : %d\n", VER);  // �� ���� ������
#else											 // �׷��� ������
#error	�����Ϸ� ������ 6.0 �̻��̾�� �մϴ�.		 // �޽����� �����ְ� ������ ����
#endif											 // #if�� ��

//#undef BIT16									 // BIT16 ��ũ�θ��� ���� ���

#ifndef BIT16									 // ��Ʈ�θ� BIT6�� ���ǵǾ� ������
	max = 100;									 // �� ���� ������
	printf("���ǰ� �� �Ǿ� ����\n");
#else											 // BIT16�� ���ǵǾ� ���� ������
	max = 10;									 //  �� ���� ������
	printf("���� �Ǿ� ����\n");
#endif											 // #ifdef�� ��
	printf("int�� ������ �ִ� : %d\n", max);	 //max ���

#if (defined(BIT16) && (VER >= 6))
	printf("BIT16 ��ũ�ΰ� ���ǵǾ� �ְ�, VER�� 6 �̻�\n");	// BIT16 ��ũ�ΰ� ���ǵǾ� �ְ� VER 6 �̻��̸�
#endif
	return 0;
}
#endif