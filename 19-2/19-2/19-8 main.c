#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_data(int* pa, int* pb);
double average(int a, int b);

int main(void)
{
	// �� ������ ����� ���ϴ� ���α׷�
	int a, b;
	double avg;

	input_data(&a, &b);								// �� ���� �Է�
	avg = average(a, b);							// ��� ���
	printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);	// �Է°��� ��� ���
	return 0;
}
#endif