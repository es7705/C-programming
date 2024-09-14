#if 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(int a, int b)
{
	int n;
	if (a == b)
	{
		n = 1;
	}
	else
	{
		n = -1;
	}
	return n;
}

int main(void)
{
	int a, b;
	int res;
	scanf("%d %d", &a, &b);
	res = f(a, b);
	printf("%d", res);
	return 0;
}
#endif