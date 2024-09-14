#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// stdin과 stdout을 사용한 문자 입출력
	int ch;

	while (1)
	{
		ch = fgetc(stdin);			// 키보드에서 문자 입력을 받아서
		if (ch == EOF)
		{
			break;					// ctrl + z로 입력 종료
		}
		fputc(ch, stdout);			// 화면에 문자 출력
	}
	return 0;
}
#endif