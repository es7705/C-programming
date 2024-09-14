#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1
	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double* pa = ary; // 100
	double* pb = ary + 2; // 116

	// 3
	for (int i = 0; i < 3; i++)
	{
		printf("%.1lf\n", *pb); // 7.4 0.5 10.0
		pb++; // 122 128
	}

	return 0;
}
#endif