#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;
	ch = getchar();

	while (ch != '\n')
	{
		if ((ch >= 'a') && (ch <= 'z'))
		{
			cnt++;
		}
		ch = getchar(); // 개행 문자 제거
	}

	printf("소문자의 개수 : %d\n", cnt);

	return 0;
}
#endif
