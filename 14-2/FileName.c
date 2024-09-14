#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int num[5][6]);
void sum_ary(int num[5][6]);

int main(void)
{
	int i, j;
	int num[5][6] = { {1,2,3,4,5}, 
					{6,7,8,9,10}, 
					{11,12,13,14,15}, 
					{16,17,18,19,20}, 
					{0} };
	sum_ary(num);
	print_ary(num);
	
	return 0;
}

void sum_ary(int num[5][6])
{
	int i = 0, j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			num[i][5] += num[i][j];
			num[4][j] += num[i][j];
			//num[4][5] += num[i][j];
		}
	}

	for ( i = 0; i < 4; i++)
	{
		num[4][5] += num[i][5];
	}
	for (j = 0; j < 5; j++)
	{
		num[4][5] += num[4][j];
	}
}

void print_ary(int num[5][6])
{
	int i, j;
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 6; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}
}
#endif