#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int* pa = &a, * pb = &b, * pt;

	printf("pa : %u, pb : %u\n", pa, pb);

	pt = pa;
	pa = pb;
	pb = pt;
	printf("%d, %d\n", *pa, *pb);

	printf("pa : %u, pb : %u\n", pa, pb);
	return 0;
}
#endif