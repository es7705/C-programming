#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a[] = { 3, 2, 1, 6, 5 };
	int i, j, temp;
	int size = sizeof(a) / sizeof(a[0]);

	for ( i = 0; i < size - 1; i++)
	{
		for ( j = i + 1; j < size; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
	}
	
	for ( i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	
	printf("\n");

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
#endif