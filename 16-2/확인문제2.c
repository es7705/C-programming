#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int* ap;
	int i, j, cnt = 0;

	printf("양수 입력 : ");
	scanf('%d', &num);
	ap = (int*)malloc((num - 1) * sizeof(int));

	if (ap == NULL)
	{
		printf("메모리 부족\n");
		exit(1);
	}

	for (i = 0; i < (num - 1); i++)
	{
		ap[i] = i + 2;
	}
	i = 0;

	while (1)
	{
		while ((ap[i] == 0) && (i < (num - 2))
		{
			i++;
		}

		if (j)
	}

	return 0;
}
#endif