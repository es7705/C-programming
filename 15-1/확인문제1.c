#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double grade = 4.5;
	double* pg = &grade;
	double** ppg = &pg;

	printf("%u\n", &grade);
	printf("%.1lf\n", **ppg);	// 4.5
	printf("%u\n", &ppg);		// ppg�� �ּ�
	printf("%u\n", *&pg);		// grade�� �ּ� 
	printf("%u\n", *ppg);		// grade�� �ּ�
	printf("%u\n", &*ppg);		// pg�� �ּ�

	return 0;
}
#endif