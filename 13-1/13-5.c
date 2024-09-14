#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 레지스터 변수
	register int i;
	auto int sum = 0;

	for (i = 0; i <= 10000; i++)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);


	return 0;
}
#endif