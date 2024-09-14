#ifndef __SUB_H_
#define __SUB_H_
#include <stdio.h>
extern int a, b;
extern char c;
static int res;

int sub_data(int a, int b)
{
	while (c != EOF)
	{
		if (c == '+')
		{
			res = a + b;
		}
		else if (c == '-')
		{
			res = a - b;
		}
		else if (c == '*')
		{
			res = a * b;
		}
		else if (c == '/')
		{
			res = a / b;
		}
	}
	printf("%d %c %d\n", a, c, b);
	return res;
}
#endif
