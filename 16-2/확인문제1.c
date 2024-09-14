#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;
	int** matrix = (int**)malloc(4 * sizeof(int*));
	for (i = 0; i < 4; i++)
	{
		matrix[i] = (int*)malloc(5 * sizeof(int));
	}

	for (i = 0; i < 4; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return 0;
}
#endif