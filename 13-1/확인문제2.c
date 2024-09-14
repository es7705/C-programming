#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void func(void);

int a = 10;

int main(void)
{
	// 2
	a = 20;
	printf("%d", a);
	printf("\n");
	func();
	printf("%d", a);

	return 0;
}

void func()
{
	a = 30;
}
#endif