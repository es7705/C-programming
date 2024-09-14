#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n[5][6] = { {1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{0} };
	int i, j, k;
	for (j = 0; j <= 4; j++)
	{
		for (i = 0; i <= 3; i++)
		{
			n[4][j] += n[i][j];
			n[i][5] += n[i][j];
			n[4][5] += n[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", n[i][j]);
		}
		printf("\n");
	}

	return 0;
}
#endif