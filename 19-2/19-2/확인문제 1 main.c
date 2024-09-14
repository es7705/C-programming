#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern void set_key(int val);
extern int get_key(void);
int key;

int main(void)
{
	int res;
	set_key(10);
	key = get_key();
	set_key(20);
	res = key + get_key();
	printf("%d\n", res);
	return 0;
}
#endif