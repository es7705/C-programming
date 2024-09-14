#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(double* pa, int siez);
void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main(void)
{
	// �迭�� ���� �Է��ϴ� �Լ�
	double ary[5];
	double max;								// �ִ��� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]); // �迭 ����� ���� ���

	input_ary(ary, size);		// �迭�� �� �Է�
	max = find_max(ary, size);	// �迭�� �ִ� ��ȯ

	printf("�迭�� �ִ� : %.1lf\n", max);	// �ִ� ���

	printf("�迭�� ��� : ");
	print_ary(ary, size);

	return 0;
}

void input_ary(double* pa, int size)	// double �����͸� �Ű������� ����
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	
	for ( i = 0; i < size; i++)	// size�� ���� ���� �ݺ� Ƚ�� ����
	{
		scanf("%lf", &(pa[i])); // �ּҸ� ����, pa + i�� ����
	}
}

void print_ary(double* pa, int size) // �迭 ��� ��ü ���
{
	int i;

	for ( i = 0; i < size; i++)
	{
		printf("%.1lf", pa[i]);

		if (i < size - 1) // ������ ��� �������� , �����
		{
			printf(", ");
		}
	}
}

double find_max(double* pa, int size)
{
	double max = pa[0];	// ù ��° �迭 ����� ���� �ִ����� ����
	int i;

	for (i = 1; i < size; i++)	// �� ��° �迭 ��Һ��� max���� ��
	{
		if (max < pa[i])
		{
			max = pa[i];
		}
	}

	return max;	// �ִ밪 ��ȯ
}
#endif