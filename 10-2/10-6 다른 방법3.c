#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa, int size);

int size(int* ary);

int main(void)
{
	// 크기가 다른 배열을 출력하는 함수
	int ary1[] = { 10, 20, 30, 40, 50 };
	int ary2[] = { 10, 20, 30, 40, 50, 60, 70 };

	size(ary1);
	size(ary2);

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}

int size(int* ary)
{
	int size = sizeof(ary) / sizeof(ary[0]);

	return size;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", *(pa + i));
	}
}


#endif