#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main(void)
{
	// ���� ������ Ȱ�� 1 : ������ ���� �ٲٴ� �Լ��� �Ű�����
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);		// �ٲٱ� ���� ���ڿ� ���
	swap_ptr(&pa, &pb);							// �Լ� ȣ��
	printf("pa -> %s, pb -> %s\n", pa, pb);		// �ٲ� �Ŀ� ���ڿ� ���

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;    // temp
	pt = *ppa;   // *pa�� �ּҸ� temp�� �ӽ� ����
	*ppa = *ppb; // *pa�� �ּҸ� *pa�� ����
	*ppb = pt;	 // �ӽ� ��ҿ� �ִ� *pa�� �ּҸ� *pb�� ����
}


#endif