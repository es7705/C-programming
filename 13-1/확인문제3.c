#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(void);

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		sum = sum + func();
	}

	printf("%d", sum);

	return 0;
}

int func(void)
{
	static int a = 0;
	a++;
	return a;
}
#endif