#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 배열명과 포인터의 차이
	int ary[3] = {10 , 20, 30};
	int* pa = ary;
	int i;

	printf("%d ", pa[0]);
	printf("%d ", *(pa + 0));
	printf("%d \n", *pa);

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(pa + i));
	}

	return 0;
}
#endif