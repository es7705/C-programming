#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a[4][10] = { "horse", "fox", "hippo", "tiger" };
	char* pa[] = { a[0], a[1], a[2], a[3] };
	int count;
	int i;
	count = sizeof(pa) / sizeof(pa[0]);
	printf("pa의 크기 :	%d\n", sizeof(pa));
	printf("pa[0]의 크기 : %d\n", sizeof(pa[0]));

	printf("%d\n", count);
	for (i = 0; i < count; i++)
	{
		printf("%c", pa[i][i]);
	}

	return 0;
}
#endif