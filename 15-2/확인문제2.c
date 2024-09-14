#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	void* vp = ary;

	printf("%d\n", ((int*)vp)[2]);
	printf("%d\n", *((int*)vp + 2));

	return 0;
}
#endif