#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ������ �ʴ� �������� ����
	// ��Ģ1 : �����ʹ� ����Ű�� ������ ���°� ���� ���� �����ؾ� �մϴ�.
	//int a = 10;
	//int* p = &a;
	//double* pd;

	//pd = p;				// ���� p�� pd�� ��� ���������� ����Ű�� �ڷ����� �ٸ�
	//printf("%lf\n", *pd);

	/*
	int a = 10;		// ���� ����� �ʱ�ȭ
	int* p = &a;	// ������ ����� ���ÿ� a�� ����Ű���� �ʱ�ȭ
	int* pb;		// double�� ������ ����Ű�� ������
		
	pb = p;			// ������ p ���� ������ pd�� ����
	
	printf("%u\n", a);  // 10
	printf("%u\n", &a); // a�� �ּ�

	printf("\n");

	printf("%u\n", p); // a�� �ּ�
	printf("%u\n", *p); // 10
	printf("%u\n", &p); // p�� �ּ�

	printf("\n");

	printf("%u\n", pb); // a�� �ּ�
	printf("%u\n", *pb); // 10
	printf("%u\n", &pb); // pb�� �ּ�
	*/

	// ��Ģ2 : �� ��ȯ�� ����� �������� ������ ������ ����
	double a = 3.4;
	double* pd = &a;
	int* pi;
	pi = (int*)pd;	// pd ���� �� ��ȯ�� pi�� ����
	//*pi = 10;
	printf("%d\n", *pi);
	return 0;
}
#endif