#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
int main(void)
{
	int a[SIZE] = { 3, 2, 1, 6, 5 };
	int i, j, temp;
	int min;

	for ( i = 0; i < SIZE - 1; i++)			// ���� ���� ���� ���ϴ� ���� �ݺ� Ƚ��
	{
		min = i;							// i�� ���� ���� ������ ÷�ڶ�� ����
		for ( j = i + 1; j < SIZE; j++)		// ù ��° �� ����� ���� ��� �������� ����
		{
			if (a[min] > a[j])				// ���� ���� ���� a[j]���� ũ��
			{
				min = j;					// j�� ���� ���� ���� ÷�ڰ� �ȴ�.
			}
		}
		if (min != i)						// ���� ���� ���� ��ġ�� �ٲ������, min�� i�� ���� ���� ������
		{
			temp = a[i];		// 3
			a[i] = a[min];		// [0] = [2] == 1 > a[0] = 1
			a[min] = temp;		// a[2] = 3
		}
	}

	for ( i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
#endif