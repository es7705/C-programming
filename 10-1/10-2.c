#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//�迭�� ������ �ϴ� ������
	int ary[3];
	int* pa = ary; // �����Ϳ� �迭�� ���� (�ּҰ��� ������ �Ͱ� ����)
	int i;

	*pa = 10; //ù ��° �迭 ��ҿ� 10 ���� == ary[0]
	*(pa + 1) = 20; //�� ��° �迭 ��ҿ� 20 ���� == ary[1]
	pa[2] = pa[1] + pa[0]; //���ȣ�� �Ἥ pa�� �迭��ó�� ���	== ary[2] = ary[1] + ary[0];

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]); // �����ͷ� ��� �迭 ��� ��� pa[i] == ary[i]
	}


	return 0;
}
#endif