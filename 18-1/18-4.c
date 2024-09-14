#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();		// 키보드에서 문자 입력
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);		// 화면에 문자 출력
	}

	return 0;
}
#endif