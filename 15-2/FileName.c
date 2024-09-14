#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void showif(int *arr, int size, int *(fp)(int));
int isOdd(int value);
int isEven(int value);

int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(a) / sizeof(a[0]);
	showif(a, size, isOdd);
	showif(a, size, isEven);

	return 0;
}

void showif(int* arr, int size, int* (fp)(int))
{
	int i;
	for (i = 0; i < size; i++)
	{
		if ((*fp)(arr[i]))
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

int isOdd(int value)
{
	if (value % 2 == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isEven(int value)
{
	if (value % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
#endif