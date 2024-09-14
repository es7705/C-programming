#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void say_hello(void);

int main(void)
{
	int x = 1, y = 20, z = 3;

	z = x + y;

	say_hello();

	return 0;
}

void say_hello(void)
{
	int x = 1;
	x = 10;

	printf("Hello World\n");
}

#endif