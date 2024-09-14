#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 3 -1
	/*
	char mark[5][5] = { 0 };
	int i, j;
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			if (i == j)
			{
				mark[i][j] = 'X';
			}
		}
	}
	*/
	// 3 - 2
	int i, j;
	char mark[5][5];
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			mark[i][j] = 'O';
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((i == j) || (i == (4 - j)))
			{
				mark[i][j] = 'X';
			}
			printf("%c", mark[i][j]);
			if((j + 1) % 5 == 0) printf("\n");
		}
	}
	return 0;
}
#endif