#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void add_by_pointer(int* pa, int* pb, int* pr);

int main(void)
{
	int a = 10, b = 20, res = 0;
	add_by_pointer(&a, &b, &res);
	printf("%d", res);

	return 0;
}

void add_by_pointer(int* pa, int* pb, int* pr)
{
	*pr = *pa + *pb;
}

#endif